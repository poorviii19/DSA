#include<iostream>
using namespace std;


// function calling itself untial a specified condition is met is called recursion
// things to take care about: 1)Base Case(termination Condition)  2)Recursive function   3) stack overflows 

int summation(int n){
    if(n==0){  //base case
        return 0;
    }

    return n +summation(n-1);   //recursive function


}


int factorial(int n){

    if(n==1){
        return 1;
    }
    return n*factorial(n-1);
}


int main(){

    int n;
    cin>>n;
    
    int sum = summation(n);
    cout<<sum<<"\n";

    int fact = factorial(n);
    cout<<fact<<endl;

    return 0;
}