#include<iostream>
#include<cstring>

using namespace std;

void compress(char s[], char result[]) {
    int i = 0, k = 0;       

    while (s[i] != '\0') {
        char curr = s[i];
        int count = 0;

        // count consecutive same characters
        while (s[i] != '\0' && s[i] == curr) {
            count++;
            i++;
        }

        result[k++] = curr;   

        if (count > 1) {        
            if (count >= 100) result[k++] = '0' + count / 100;
            if (count >= 10)  result[k++] = '0' + (count / 10) % 10;
            result[k++] = '0' + count % 10;
        }
    }
    result[k] = '\0';

    // Only use compressed version if it's shorter
    if (strlen(result) >= strlen(s))
        strcpy(result, s);

        cout<<result<<endl;
}

int main(){
    char str[] = "aaabbcccdd";

    char result[100];
    compress(str, result);

    return 0;
}