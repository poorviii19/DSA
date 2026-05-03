#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char name[50];

    // Method 1: cin — stops at whitespace (reads one word)
    cin >> name;                  // Input: "Hello World" → stores only "Hello"

    // Method 2: cin.getline — reads entire line including spaces
    cin.getline(name, 50);        // Input: "Hello World" → stores "Hello World"

    // Method 3: gets (AVOID in modern C++ — unsafe, no bounds checking)
    // gets(name);  ← can overflow the buffer — DO NOT USE

    // Output
    cout << name << endl;         // prints until \0
   

    char city[10] = "Delhi";
    cout<<city<<endl;

    // Find length
    int len = strlen(city);// walks from index 0 until \0
    cout<<len<<endl;  // Output: 5  (not 6 — \0 not counted)
    //timecomplexity of strlen: O(n), Space complexity: O(1)

    //Access individual characters
    cout<<city[0]<<endl;
    cout<<city[1]<<endl;

    //Modify a character
    city[0] = 'd';
    cout<<city<<endl;

    return 0;
}