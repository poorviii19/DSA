#include<iostream>
#include<cstring>
using namespace std;

void myStrcat(char s1[], char s2[]){
    int i =0, j= 0;
    while(s1[i] != '\0') i++;
    while(s2[j]!='\0'){
        s1[i] = s2[j];
        i++;
        j++;
    }
    s1[i] = '\0';
}

int main(){
    char src[20] = "Hello ";
    char src1[] = "World";

    myStrcat(src,src1);
    cout<<src<<endl;

    char s1[20] = "Hello ";
    char s2[] = "ji!";
    //built-in:
    strcat(s1,s2);
    cout<<s1<<endl;



}