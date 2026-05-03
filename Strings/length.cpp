#include<iostream>
#include<cstring>
using namespace std;

//Manual: time complexity O(n)
int myStrLen(char s[]){
    int count = 0;
    while(s[count] !='\0'){    // walk until null terminator
        count++;
    }

    return count;     // \0 itself is NOT counted
}

int main(){
    char s[] = "Hello Ji ,Kaise hain Aap?";
    char s1[] = "Hello, How are you?";
    //Manual
    cout<<myStrLen(s)<<endl;
    cout<<myStrLen(s1)<<endl;

    //Buit-in  -> same time complexity as manual, optimized internally
    cout<<strlen(s)<<endl;
    cout<<strlen(s1)<<endl;



    return 0;
}