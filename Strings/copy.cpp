#include<iostream>
#include<cstring>
using namespace std;


// Manual version
void myStrcpy(char strCpy[], char str[]){
    int i =0;
    while(str[i] != '\0'){
        strCpy[i] = str[i];
        i++;
    }
    strCpy[i] = '\0';   // critical — manually place the null terminator
}

int main(){
    char str[] = "Hello ji";
    char strCpy[10];     // MUST be large enough — no bounds check!

    myStrcpy(strCpy, str);
    cout<<strCpy<<endl;

    //Built-in
    char cpy[10];
    strcpy(cpy,str);  //cpy = "Hello ji"
    cout<<cpy<<endl;

    return 0;
}