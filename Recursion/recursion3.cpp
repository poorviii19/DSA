#include<bits/stdc++.h>
using namespace std;


// Multiple Recursive calls


int fibonaci(int n){    //nth fibonaci number   T.C.  nearly ==>  O(2^n)
    if(n<=1){
        return n;
    }
    return fibonaci(n-1)+fibonaci(n-2);


}

int main(){

    int n;
    cin>>n;


    int ans = fibonaci(n);
    cout<<ans;


    return 0;
}