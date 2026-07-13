#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;

    cout << "Initially:\n";
    cout << "Size = " << s.size()
         << ", Capacity = " << s.capacity() << endl;

    s.reserve(10);  // pre-allocate for 10 chars — zero reallocations

    cout << "\nAfter reserve(10):\n";
    cout << "Size = " << s.size()
         << ", Capacity = " << s.capacity() << endl;

    for (int i = 1; i <= 10; i++) {
        s += 'a';
        cout << "After inserting " << i
             << " chars: Size = " << s.size()
             << ", Capacity = " << s.capacity() << endl;
    }
}

// Without reserve(), string doubles its capacity whenever it runs out — this causes O(log n) reallocations and O(n) copies each time. When you know the final size, reserve() eliminates all of them.