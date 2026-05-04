#include<iostream>
#include<cstring>

using namespace std;

string anagram(char s1[], char s2[]){
    if(strlen(s1) != strlen(s2)){
        return "not an anagram";
    }

    int freq[26] {0};
    for(int i =0; s1[i] != '\0';i++){
        freq[s1[i]-'a']++;
    }
    for(int i =0; s2[i] != '\0';i++){
        freq[s2[i]-'a']--;
    }

    for(int i =0;i<26;i++){
        if(freq[i]!=0){
            return "not an anagram";
        }
    }
    return "strings are anagram";
}

int main(){

    char s1[] = "listen";
    char s2[] = "silent";

    string ans = anagram(s1, s2);
    cout<<ans<<endl;

    char s3[] = "listen";
    char s4[] = "silence";

    string ans1 = anagram(s3, s4);
    cout<<ans1<<endl;
    return 0;
}