#include<iostream>
using namespace std;


int count = 0;

// counting from 1 to N
void printCount(){
    if(count == 5){
        return;
    }
    count++;
    cout<<count<<endl;
    printCount();
}


int main(){

    printCount();

    // recursion Tree:  A recursion tree is a visual representation of the costs and subproblems
    //  involved in a recursive algorithm. Each node in the tree corresponds to the work done at a
    //   single recursive call, and the entire tree helps in analyzing the algorithm's time complexity
   

    return 0;
}