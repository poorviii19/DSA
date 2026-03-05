#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void explainPair(){   

    // pairs
    pair<int,int>p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    // nested pairs
    pair<int,pair<int,int>>p1 = {1,{3,4}};
    cout<<p1.first<<" "<< p1.second.second<<endl;
    pair<int,int> arr[] = {{1,2},{2,5},{5,6}};
    cout<<arr[1].second;

}


void explainVector(){

    // vector is a dynamic memory version of an array
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    

}

int main(){

    explainPair();
    cout<<endl;

    explainVector();
    cout<<endl;

    return 0;
}