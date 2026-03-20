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

void printRevCount(int n){
    if(n<=0){
        return;
    }
    cout<<n;
    printRevCount(n-1);


}

void printCountBacktracign(int i, int n){
    if(i<1){
        return;
    }

    printCountBacktracign(i-1,n);
    cout<<i<<" ";
  
}

void printRevCountBacktracking(int i, int n){
    if(i>n){
        return;
    }
    printRevCountBacktracking(i+1,n);
    cout<<i<<" ";

}


int main(){
    int n;
    cin>>n;


    printCount();
    cout<<endl;
    printRevCount(n);
    cout<<endl;
    printCountBacktracign(n,n);
    cout<<endl;
    printRevCountBacktracking(1,n);
    cout<<endl;


    // recursion Tree:  A recursion tree is a visual representation of the costs and subproblems
    // involved in a recursive algorithm. Each node in the tree corresponds to the work done at a
    // single recursive call, and the entire tree helps in analyzing the algorithm's time complexity

    
   

    return 0;
}