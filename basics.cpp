#include<bits/stdc++.h>   //this library includes all the libraries of c++
using namespace std;


int main(){

    // cout<< it helps to print the output in c++ it is under library iostream similarly cin>> is for taking input
    cout<<"Hello, My name is Poorvi Shukla"<<"\n";
    cout<<"Hello, My name is Poorvi Shukla"<<endl;
    cout<<"Hello, My name is Poorvi Shukla";

    int x, y;
    cin>>x>>y;
    cout<<x<<" "<<y<<endl;


    // Data types: all datatypes store some memry space, so utilize it well
    // Inbulit Data Types
    // int -> stores integer
    int num = 5;
    // long , long long-> stores integer but wider range than int
    long z = 34567;
    long long Z = 123456789;
    // float, double: use for decimal numbers. Double range> float
    float a = 5.6;
    float b = 5;
    double A = 6.78;
    double B = 56;
    cout<<num<<" "<<z<<" "<<Z<<" "<<a<<" "<<b<< " "<<A<<" "<<B<<" ";



    // string and getline:
    // to store string and to take input of string using space or tabs
    string s;
    cin>>s;
    cout<<s<<endl;
    
    getline(cin,s);
    cout<<s<<endl;


    // char: stores charcters:
    char ch;
    cin>>ch;
    cout<<ch<<endl;

    // bool: stores true and false
    bool isAdult = true;
    cout<<isAdult;

// there are more datatypes as well:
// long  double, wchar_t, signed int, unsigned int
// signed char, unsigned char
// short int, unsigned short int
// long int, unsigned long int
// long long int, unsigned long long int
// enum struct class


    return 0;
}