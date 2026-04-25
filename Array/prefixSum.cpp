#include<iostream>
using namespace std;

int main(){

    int arr[] = {3,1,4,1,5,9,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    //build prefix sum array:
    int prefix[n];
    prefix[0] = arr[0]; //first element stays same

    for(int i =1;i<n;i++){
       prefix[i] =  prefix[i-1] + arr[i];
    }

    //prefix = {3,4,8,9,14,23,25}

    //Answer range sum query [L,R]

    int l , r;
    cin>>l>>r;

    int rangeSum = prefix[r] - prefix[l-1];
    cout<<"Sum from index l to r: "<<rangeSum<<endl;

    return 0;
}