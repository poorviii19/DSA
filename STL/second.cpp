#include<iostream>
#include<List>
#include<deque>

using namespace std;

void explainList(){
//list is quite similar to vector but provides front operations as well;

list<int> ls;
ls.push_back(2);   //{2}
ls.emplace_back(3);   //{2,3}
ls.push_front(5);   //{5,2,3}   //very very cheap in terms of T.C. if compared with vector
//   cause in list doubly linked list is maintained but in vector its the singly linked list 
ls.emplace_front(4);  //{4,5,2,3}

//rest functions are same as vector  begin, end, rbegin, rend, clear, insert, size, swap

for(auto x : ls){
    cout << x << " ";
}

}


void explainDeque(){

    deque<int> dq;
    dq.push_back(1);  //{1};
    dq.emplace_back(2); //{1,2}

    

    dq.push_front(4);  //{4,1,2}
    dq.emplace_front(3);  //{3,4,1,2}

    dq.pop_back(); //{3,4,1};

    dq.pop_front();  //{4,1}

    dq.back();   //returns the back element
    dq.front();  //returns the front element

    for(auto x: dq){
        cout<<x<<" ";
    }


    //rest functions are same as vector  begin, end, rend, rbegin, clear, insert, size, swap

}
int main(){

    explainList();
    cout<<endl;
    explainDeque();

    return 0;
}