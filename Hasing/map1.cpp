#include<bits/stdc++.h>
using namespace std;

int main(){


    // map is a datastructure that stores value in form of key and value key is number and value is frequency
    // e.g. mapp[arr[i]]++;
    // beneficial in terms of saving memory than array

    // map always store all the values in sorted order
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++) cin>>arr[i];

    // precompute
    unordered_map<int, int> mpp;
    for(int i =0;i<n;i++){
        mpp[arr[i]]++;
    }

    for(auto it: mpp){
        cout<<it.first<<"->"<<it.second<<endl;
    }

    int q;
    cin>>q;
    while(q--){
        int number;
        cin>>number;

        // fetch
        cout<<mpp[number]<<" ";
    }
    cout<<endl;


    // T.C.:  storing nad fetching are included both takes logarithmic of n in all cases

    //but unordered_map:  order can not be decided, varies compiler to compiler
    // its avg and best T.C is O(1) and in {worst case it is O(N)(very rarely , only because of collision)}

    // use unordered map mostly if TLE happens then switch to map


    return 0;
}