#include<iostream>
#include <algorithm>     //str for reverse
#include<cstring>
using namespace std;


// Method 1: manual two-pointer (O(n) time, O(1) space)
void reverseStr(char s[], int n){
    int l =0, r = n-1;
    while(l<r){
        swap(s[l],s[r]);
        l++;
        r--;
    }
}


int main(){
    char str[] = "Hello world";
    int n = strlen(str);

    //manual:
    reverseStr(str, n);
    cout<<str<<endl;


    //built-in:
    char str1[] = "Name";
    int m = strlen(str1);
    reverse(str1, str1+strlen(str1));
    cout<<str1<<endl;


    return 0;
}