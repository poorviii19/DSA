#include<bits/stdc++.h>
using namespace std;


// Multiple Recursive calls


int fibonaci(int n){    //nth fibonaci number   T.C.  nearly ==>  O(2^n)
    if(n<=1){
        return n;
    }
    return fibonaci(n-1)+fibonaci(n-2);


}

int power(int n, int m){
    if(n == 0 ){
        return 1;
    }

    return m*power(n-1,m);
}


void print(int n){

    // base case
    if(n==0){
        return;
    }

    // Recursive relation:
    
    // tail recursion : performing main logic before recursive call
    // cout<<n<<endl;
    // print(n-1);
    

    // head recursion: performing recursive call before main logic
    print(n-1);
    cout<<n<<endl;
}

int main(){

    int n;
    cin>>n;


    // int ans = fibonaci(n);
    // cout<<ans;


    // int m;
    // cin>>m;
    // int result = power(n,m);
    // cout<<result;

    print(n);

    return 0;
}