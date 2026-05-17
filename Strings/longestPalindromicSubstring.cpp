#include<iostream>
#include<utility>
#include<string>

using namespace std;


// Expand around center approach: O(n^2) time, O(1) space

// Helper: expand from center, return [left, right] indices
pair<int,int> expand(char s[], int l, int r, int n) {

    while (l >= 0 && r < n && s[l] == s[r]) {
        l--;
        r++;
    }

    return {l + 1, r - 1};
}

string longestPalindrome(char s[], int n) {

    int bestL = 0;
    int bestR = 0;

    for (int i = 0; i < n; i++) {

        // Odd length palindrome
        pair<int,int> p1 = expand(s, i, i, n);
        int l1 = p1.first;
        int r1 = p1.second;

        if (r1 - l1 > bestR - bestL) {
            bestL = l1;
            bestR = r1;
        }

        // Even length palindrome
        pair<int,int> p2 = expand(s, i, i + 1, n);
        int l2 = p2.first;
        int r2 = p2.second;

        if (r2 - l2 > bestR - bestL) {
            bestL = l2;
            bestR = r2;
        }
    }

    string result = "";

    for (int i = bestL; i <= bestR; i++) {
        result += s[i];
    }

    return result;
}


int main() {

    char s[] = "babad";

    cout << longestPalindrome(s, 5) << endl;

    char s2[] = "cbbd";

    cout << longestPalindrome(s2, 4) << endl;

    return 0;
}


