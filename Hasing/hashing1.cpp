#include<bits/stdc++.h>
using namespace std;


int main(){


    // number hashing   -> has a size limit of 10^6 if decalred inside main 
    // and 10^7 if declared globally
    // So prefer using maps  -> prefer map1.cpp
    int n;
    cin>>n;
    int arr[n];
    for(int i =0; i<n;i++){
        cin>>arr[i];
    }

    // precomputation
    int hash[13] = {0};
    for(int i =0;i<n;i++){
        hash[arr[i]] += 1;

    }


    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;
        cout<<endl;

        //fetch
        cout<<hash[number]<<" ";

    }
    cout<<endl;


    return 0;
}

