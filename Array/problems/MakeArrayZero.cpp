// no. of operations to make all elements of an array 0:
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of an array: ";
    cin>>n;

    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int ans = arr[0];
    for(int i =1;i<n;i++){

        //m1:
        // if(arr[i]>arr[i-1]){
        //     int diff =  arr[i]-arr[i-1];
        //     ans = ans+diff;
        // }
        // \m2:
        ans += max(0, arr[i+1]-arr[i]);
    }
    cout<<ans;

    return 0;
}