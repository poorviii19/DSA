#include<iostream>
using namespace std;


int summation(int n){
    if(n==0){
        return 0;
    }

    return n +summation(n-1);


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