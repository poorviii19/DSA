// functions are set of codes that perform somethign for you
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code multiple time
// void -> does not return anything
// return  -> 
// parameterised
// non parameterised
#include<iostream>
using namespace std;
 
void printName(){    //void and non parameterized function
    cout<<"hey Poorvi!"<<endl;
}
void printName(string name){     //void and parameterized function
    cout<<"hey "<<name;
}

int sum(int num1, int num2){    //return and parameterised
    int num3 = num1+num2;
    return num3;
}


// pass by value:  copy of parameter goes here, not the original value, original memory's copy goes here

void print(int num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}

// pass by reference:  via reference the original value goes here, as a reference to original memory goes here.

void printref(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
}
int main(){
        string name1;
        cin>>name1;
        printName();
        printName(name1);
        int num1,num2;
        cin>>num1>>num2;
        int res = sum(num1,num2);
        cout<<res;

        // pass by value:
        int num = 10;
        print(num);
        cout<<num<<endl;  //prints 10


        // pass by reference: 
        printref(num);
        cout<<num<<endl; //prints 15
// reminder: arrays automatically always get passed by reference
    return 0;
}