#include<iostream>
using namespace std;

// Summation
int summation(int n){
    if(n == 0){
        return 0;
    }
    return n + summation(n - 1);
}

// Factorial
int factorial(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return n * factorial(n - 1);
}

// Reverse Array (Recursion)
void reverseAnArray(int arr[], int l, int r){
    if(l >= r){
        return;
    }

    int temp = arr[l];
    arr[l] = arr[r];
    arr[r] = temp;

    reverseAnArray(arr, l + 1, r - 1);
}

// Palindrome Check
bool stringPalindrome(int i, string s){
    if(i >= s.length()/2){
        return true;
    }

    if(s[i] != s[s.length() - i - 1]){
        return false;
    }

    return stringPalindrome(i + 1, s);
}

int main(){

    int n;
    cin >> n;

    // FIX: clear buffer before getline
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    cin.ignore();

    string str;
    getline(cin, str);


    // Summation
    cout << summation(n) << endl;

    // Factorial
    cout << factorial(n) << endl;

    // Reverse Array
    reverseAnArray(arr, 0, n - 1);
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Palindrome
    if(stringPalindrome(0, str)){
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }

    return 0;
}