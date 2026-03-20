#include<iostream>
using namespace std;


int main(){

    // using: 

    // charachter hashing we can always prefer arrays because we do have a capacity of 256 characters

    // lower case string

    // ASCII, typecasting  character - 'a'  we wll get index matched with particular character

    string str;
    cin>>str;



    // precompute:
    int hash[26] ={0};

    for(int i =0;i<str.size();i++){
        hash[str[i]-'a']++;
    }

    int q;
    cin>>q;
    while(q--){
        char ch;
        cin>>ch;

        // fetch:
        cout<<hash[ch-'a']<<endl;

    }



    return 0;
}