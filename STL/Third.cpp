#include<iostream>
#include<stack>
#include<queue>


using namespace std;

void explainStack(){
    // Last in first out: LIFO

    stack<int> st;
    st.push(1);  //{1}
    st.push(2); //{2,1}
    st.push(4); //{4,2,1}
    st.push(5); //{5,4,2,1}

    cout<<st.top();  //prints 5 "**  st[2] is inavalid **"
    cout<<"\n";

    st.pop(); //deletes 5

    cout<<st.top(); //4
    cout<<endl;

    cout<<st.size(); //3
    cout<<endl;

    cout<<st.empty(); //false  returns 0
    cout<<endl;

    stack<int> st2;
    st.swap(st2);  //st2 and st will be swapped with each other

    //in stack all operations happen in O(1) T.C.




}

void explainPriorityQueue(){

    //stored in form of tree
    priority_queue<int>pq;   //also known as Maximum Heap
    pq.push(5);   //{5}
    pq.push(2);  //{5,2}
    pq.push(8);  //{8,5,2}
    pq.push(7);   //{8,7,5,2}
    pq.emplace(10);  //{10,8,7,5,2}

    cout<<pq.top(); //prints 10

    pq.pop(); //{8,7,5,2}
    cout<<pq.top();  //8


    //size swap empty function same as others

    //Minimum Heap -> Minimum Priority Queue

    priority_queue<int, vector<int> , greater<int>> pq1;
    pq1.push(5); //{5}
    pq1.push(2); //{5,2}
    pq1.push(8); //{2,5,8}

    cout<<pq.top();  //prints 2

    //push and pop happens in O(log n)  top function happens in O(1)


}

void explainQueue(){


    // First in First out: FIFO

    queue<int> q1;
    q1.push(1);  //{1}
    q1.push(2);  //{1,2}
    q1.emplace(4);  //{1,2,4}

    q1.back() += 5;  //4+5
    cout<<q1.back();  //prints 9;
    cout<<endl;

    cout<<q1.front(); //prints 1

    cout<<endl;

    q1.pop();  //{2,9}  as it follows FIFO

    cout<<q1.front(); //prints 2

    // size, swap , empty are same as stack


}


int main(){

    explainStack();
    cout<<endl;
    explainQueue();
    cout<<endl;
    explainPriorityQueue();
    cout<<endl;

    return 0;
}