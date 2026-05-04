#include<iostream>
#include<cstring>
using namespace std;

void printFrequency(char s[]) {
    int freq[52] = {0};

    // Build frequency array — O(n)
    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'a' && s[i] <= 'z'))
            freq[s[i] - 'a']++;  //0-25
        else if (( s[i]>='A' && s[i] <= 'Z'))
            freq[s[i] - 'A' +26]++;  //26-51
    }
    // lowercase

     for (int i = 0; i < 26; i++) {
        if (freq[i] > 0)
            cout << (char)('a' + i) << " : " << freq[i] << endl;
    }

    // uppercase
    for (int i = 26; i < 52; i++) {
        if (freq[i] > 0)
            cout << (char)('A' + (i - 26)) << " : " << freq[i] << endl;
    }
}

int main(){

    char str[] = "HelloWorld";
    printFrequency(str);


    return 0;
}