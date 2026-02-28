#include<iostream>
using namespace std;

int main(){
    // for loop:  control flow statements in programming that enable 
    //the repeated execution of a block of code a specific number of 
    //times or until a condition is met

    // requires:- initialization, condition, updation
    for(int i=0;i<20;i++){
        cout<<"Hello World"<<endl;
    }


    // While Loop:a control flow statement that repeatedly executes a block
    //  of code as long as a specified Boolean condition remains true
    int n = 10;    //initialization
    while(n>0){     //condition 
        cout<<n<<endl;
        n--;          //update
    }

    // do while loop: A do-while loop is a control flow statement that 
    // executes a block of code at least once, then repeatedly executes
    //  or stops based on a condition checked after the body runs. 
    
    int i = 2;
    do{
        cout<<"Hello World"<<endl;
        i=i+1;
    }while(i<=1);

    cout<<i<<endl;

    return 0;
}