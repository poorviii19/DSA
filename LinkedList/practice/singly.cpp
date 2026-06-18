#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int val) { data = val; next = nullptr; }
};

class LinkedList {
private:
    Node* head;

public:
    LinkedList() { head = nullptr; }

    void traverse() {
        Node* current = head;
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next;
        }
        cout << endl;
    }

    bool search(int key) {
        Node* current = head;
        while (current != nullptr) {
            if (current->data == key) return true;
            current = current->next;
        }
        return false;
    }

    void insertAtBeginning(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) { head = newNode; return; }
        Node* current = head;
        while (current->next != nullptr) current = current->next;
        current->next = newNode;
    }

    void insertAtPosition(int val, int position) {
        if (position == 0) { insertAtBeginning(val); return; }
        Node* prev = head;
        for (int i = 0; i < position - 1; i++) {
            if (prev == nullptr) { cout << "Invalid position\n"; return; }
            prev = prev->next;
        }
        if (prev == nullptr) { cout << "Invalid position\n"; return; }
        Node* newNode = new Node(val);
        newNode->next = prev->next;
        prev->next = newNode;
    }

    void deleteAtBeginning() {
        if (head == nullptr) { cout << "List is empty\n"; return; }
        Node* temp = head;
        head = head->next;
        delete temp;
    }

    void deleteAtEnd() {
        if (head == nullptr) { cout << "List is empty\n"; return; }
        if (head->next == nullptr) { delete head; head = nullptr; return; }
        Node* current = head;
        Node* prev = nullptr;
        while (current->next != nullptr) {
            prev = current;
            current = current->next;
        }
        prev->next = nullptr;
        delete current;
    }

    void deleteAtPosition(int position) {
        if (head == nullptr) { cout << "List is empty\n"; return; }
        if (position == 0) { deleteAtBeginning(); return; }
        Node* prev = head;
        for (int i = 0; i < position - 1; i++) {
            if (prev->next == nullptr) { cout << "Invalid position\n"; return; }
            prev = prev->next;
        }
        if (prev->next == nullptr) { cout << "Invalid position\n"; return; }
        Node* current = prev->next;
        prev->next = current->next;
        delete current;
    }

    ~LinkedList() {                     // destructor: clean up every node
        Node* current = head;
        while (current != nullptr) {
            Node* next = current->next;
            delete current;
            current = next;
        }
    }
};

int main() {
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.traverse();                  // 10 20 30

    list.insertAtBeginning(5);
    list.traverse();                  // 5 10 20 30

    list.insertAtPosition(15, 2);
    list.traverse();                  // 5 10 15 20 30

    list.deleteAtBeginning();
    list.traverse();                  // 10 15 20 30

    list.deleteAtEnd();
    list.traverse();                  // 10 15 20

    list.deleteAtPosition(1);
    list.traverse();                  // 10 20

    cout << "Search 20: " << list.search(20) << endl;   // 1 (true)
    cout << "Search 99: " << list.search(99) << endl;   // 0 (false)

    return 0;
}