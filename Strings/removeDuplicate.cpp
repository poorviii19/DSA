#include<iostream>
#include<cstring>
using namespace std;

void removeDuplicates(char s[]){
    bool seen[256] = {false};
    int newIndex = 0;

    for(int i =0; s[i] != '\0'; i++){
        if(!seen[(int)s[i]]){
            seen[(int)s[i]] = true;
            s[newIndex++] = s[i];
        }
    }
    s[newIndex] = '\0';  

    cout<<s<<endl;
}


int main(){
    char str[] = "Programming";
    removeDuplicates(str);

    return 0;
}