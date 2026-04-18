#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    //constructor:
    Node(int data){
        this->data = data;
        this->next = NULL;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL ){
            delete next;
            next = NULL;
        }
        cout<<"memory is free for node with data: "<<value<<endl;
    }
};

void insertNode(Node* &tail, int element, int data){
    //by assuming that the element is present in the list:
    // case1: empty list
    if(tail==NULL){
        Node* newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode;
    }
    else{
        // non-empty list:

        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next;
        }

        //element found  -> curr is representing element's node

        Node* temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;


    }

}


void deleteNode(Node* &tail, int val){
    //empty list:
    if(tail == NULL){
        cout<<"List is empty";
        return;
    }

    //assuming that the value is present in the linked list:

    else{

        Node* prev = tail;
        Node* curr = prev->next;

        while(curr->data != val){
            prev=  curr;
            curr = curr->next;
        }

        prev->next = curr->next ;


        //single node only:

        if(curr==prev){
            tail = NULL;
        }

        //>= 2 nodes
        if(tail == curr){
            tail = prev;
        }
        curr->next = NULL;
        delete curr;
    }

}

void print(Node* tail){

    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp = tail;

    do{
        cout<<tail->data<<" ";
        tail = tail->next;
    }while(tail != temp);

    cout<<endl;
}

int main(){


    Node* tail = NULL;

    //empty list 
    insertNode(tail, 5, 3);
    print(tail);
    
    //non empty list:
    
    insertNode(tail, 3, 5);
    print(tail);

    insertNode(tail, 5, 7);
    print(tail);

    insertNode(tail, 5, 9);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);
    
    deleteNode(tail, 3);
    print(tail);
    deleteNode(tail, 5);
    print(tail);

    //try this while commenting above code except first insertion
    deleteNode(tail, 3);
    print(tail);



    return 0;
}