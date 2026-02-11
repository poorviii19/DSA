#include<iostream>
#include<limits.h>
using namespace std;

int main(){

    int n;
    cout<<"Enter size of an array: ";
    cin>> n;
    cout<<endl;
    int arr[n];
    for(int i =0;i<n;i++){
        cin>>arr[i];
    }

    int secondmax = INT_MIN;
    int max = arr[0];
    for(int i = 0;i<n;i++){
        if(arr[i]>max){
            secondmax = max;
            max= arr[i];
        }
    }

    cout<<"Largest Element is: "<<max<<endl;
    cout<<"Second Largest Element is: "<<secondmax<<endl;


    return 0;



}