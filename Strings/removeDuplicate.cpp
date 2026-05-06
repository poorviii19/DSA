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


//using frequency array:
void removeDuplicates1(char s[]) {
    int freq[256] = {0};

    for (int i = 0; s[i] != '\0'; i++) {
        freq[(int)s[i]]++;
    }
    int writeIdx = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        if (freq[(int)s[i]] > 0) {
            s[writeIdx++] = s[i];
            freq[(int)s[i]] = 0;  // mark as used
        }
    }

    s[writeIdx] = '\0';
    cout<<s<<endl;
}


int main(){
    char str[] = "Programming";
    char str1[] = "Programming";
    removeDuplicates(str);
    removeDuplicates1(str1);

    return 0;
}