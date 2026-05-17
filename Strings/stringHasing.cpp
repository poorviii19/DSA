#include <iostream>
using namespace std;

const long long MOD = 1e9 + 7;
const long long BASE = 31;        // prime, slightly larger than 'z'-'a'=25

// Compute hash of string s
long long stringHash(char s[]) {
    long long hash = 0;
    long long power = 1;          // BASE^0, BASE^1, BASE^2 ...

    for (int i = 0; s[i] != '\0'; i++) {
        int c = s[i] - 'a' + 1;   // map 'a'→1, 'b'→2, ..., 'z'→26
                                   // using 1-indexed avoids hash("a") == hash("")

        hash = (hash + c * power) % MOD;
        power = (power * BASE) % MOD;
    }
    return hash;
}

int main() {
    char s1[] = "abc";
    char s2[] = "abc";
    char s3[] = "xyz";

    cout << stringHash(s1) << endl; 
    cout << stringHash(s2) << endl; 
    cout << stringHash(s3) << endl; 

    // Fast equality check
    if (stringHash(s1) == stringHash(s2))
        cout << "Possibly equal" << endl;  // confirm with strcmp to avoid collision
    if (stringHash(s1) == stringHash(s3))
        cout << "Possibly equal" << endl;  // confirm with strcmp to avoid collision
    else cout<<"not equal "<<endl;
}