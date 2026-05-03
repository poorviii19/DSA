#include<iostream>
#include<cstring>

using namespace std;

int main(){
    char s[] = "Code with me!";

    // Method 1: index-based traversal(most common)
    for(int i =0; s[i]!='\0';i++){
        cout<<s[i];
    }
    cout<<endl;


    //Method 2: pointer-based (used in system code)
    char* ptr = s;
    while(*ptr != '\0'){
        cout<<*ptr;
        ptr++;
    }
    cout<<endl;

    return 0;
}