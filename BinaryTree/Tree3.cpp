// deletion in a tree:
#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insert(Node* root,int value){

    Node* newNode = new Node(value);

    if(root==NULL){
        return newNode;
    }

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* temp=q.front();
        q.pop();

        if(temp->left==NULL){
            temp->left=newNode;
            return root;
        }
        else{
            q.push(temp->left);
        }

        if(temp->right==NULL){
            temp->right=newNode;
            return root;
        }
        else{
            q.push(temp->right);
        }
    }

    return root;
}

void deleteDeepest(Node* root, Node* dNode){

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* temp=q.front();
        q.pop();

        if(temp->left){

            if(temp->left==dNode){
                temp->left=NULL;
                delete dNode;
                return;
            }
            else{
                q.push(temp->left);
            }
        }

        if(temp->right){

            if(temp->right==dNode){
                temp->right=NULL;
                delete dNode;
                return;
            }
            else{
                q.push(temp->right);
            }
        }
    }
}

Node* deleteNode(Node* root,int key){

    if(root==NULL){
        return NULL;
    }

    if(root->left==NULL && root->right==NULL){
        if(root->data==key){
            delete root;
            return NULL;
        }
        return root;
    }

    queue<Node*> q;
    q.push(root);

    Node* target=NULL;
    Node* temp;

    while(!q.empty()){

        temp=q.front();
        q.pop();

        if(temp->data==key){
            target=temp;
        }

        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }

    if(target!=NULL){

        int deepestValue=temp->data;

        target->data=deepestValue;

        deleteDeepest(root,temp);
    }

    return root;
}

void levelOrder(Node* root){

    if(root==NULL) return;

    queue<Node*> q;
    q.push(root);

    while(!q.empty()){

        Node* temp=q.front();
        q.pop();

        cout<<temp->data<<" ";

        if(temp->left){
            q.push(temp->left);
        }

        if(temp->right){
            q.push(temp->right);
        }
    }
}

int main(){

    int n;
    cout<<"Enter number of nodes: ";
    cin>>n;

    Node* root=NULL;

    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        root=insert(root,val);
    }

    cout<<"Level Order before deletion: ";
    levelOrder(root);

    int key;
    cout<<"\nEnter node to delete: ";
    cin>>key;

    root=deleteNode(root,key);

    cout<<"Level Order after deletion: ";
    levelOrder(root);
}