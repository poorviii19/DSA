#include <iostream>
#include <vector>
using namespace std;

// Function to build the LPS (Longest Prefix Suffix) array
void buildLPS(string pattern, vector<int> &lps) {
    int m = pattern.length();

    lps[0] = 0;          // First character always has LPS = 0

    int len = 0;         // Length of previous longest prefix suffix
    int i = 1;

    while (i < m) {

        // Characters match
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        }

        // Characters don't match
        else {

            if (len != 0) {
                // Go back to previous possible prefix
                len = lps[len - 1];
            }
            else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// KMP Search Function
void KMPSearch(string text, string pattern) {

    int n = text.length();
    int m = pattern.length();

    vector<int> lps(m);

    buildLPS(pattern, lps);

    cout << "LPS Array: ";
    for (int x : lps)
        cout << x << " ";
    cout << "\n\n";

    int i = 0;   // Index for text
    int j = 0;   // Index for pattern

    while (i < n) {

        // Characters match
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }

        // Entire pattern matched
        if (j == m) {
            cout << "Pattern found at index " << i - j << endl;

            // Continue searching for next occurrence
            j = lps[j - 1];
        }

        // Mismatch after some matches
        else if (i < n && text[i] != pattern[j]) {

            if (j != 0)
                j = lps[j - 1];
            else
                i++;
        }
    }
}

int main() {

    string text = "AABAABAABAAB";
    string pattern = "AABAAB";

    KMPSearch(text, pattern);

    return 0;
}