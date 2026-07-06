#include <iostream>
using namespace std;

int main() {

    // reverse a string without using third variable:  use XOR operator:
    string s = "hello";

    int left = 0;
    int right = s.length() - 1;

    while (left < right) {
        s[left] ^= s[right];
        s[right] ^= s[left];
        s[left] ^= s[right];

        left++;
        right--;
    }

    cout << s;
}