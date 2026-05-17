#include<iostream>
#include<cstring>
using namespace std;


// Naive pattern matching — O(n×m)
// Returns starting index of first match, -1 if not found
int patternMatch(char text[], char pat[]) {
    int n = strlen(text);
    int m = strlen(pat);

    for (int i = 0; i <= n - m; i++) {    
        int j = 0;
        while (j < m && text[i + j] == pat[j]) {
            j++;
        }
        if (j == m) return i;              
    }
    return -1;
}

int main(){
    char text[] ="Hello World";
    char pat[] ="World";

    int index = patternMatch(text, pat);
    cout<<index<<endl;
    return 0;
}

// "hello world", "world" → returns 6
