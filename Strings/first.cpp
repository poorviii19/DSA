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
   

    return 0;
}