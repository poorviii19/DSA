#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char s[], int n) {
    int l = 0, r = n - 1;      

    while (l < r) {
        if (tolower(s[l]) != tolower(s[r]))       // mismatch found   //tolower : if  case-insensitive check needed
            return false;
        l++;                    // move inward
        r--;
    }
    return true;                // all chars matched
}

int main() {
    char s[] = "RaceCar";
    int n = strlen(s);          

    if (isPalindrome(s, n))
        cout << "Palindrome" << endl;
    else
        cout << "Not palindrome" << endl;
}