#include<bits/stdc++.h>
using namespace std;

int main(){
// Array : collection of elements  as a continuous memory allocation of same data type,
// where many elements of same data type can be stored in one place accessed using a common name and an index
// 0-based indexing:

 //1-D array: 
    
    int arr[5];
    cout<<"Enter elements of array: ";
    cout<<endl;
    for(int i =0;i<5;i++){
        cin>>arr[i];
    }
    cout<<"Array elements are: ";
    cout<<endl;

    for(int i =0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;


    // 2-D array:

    int arr1[3][5];   //int arrayname[rows][columns];
    // if we will not initialise the elements then it will return garbage values


// string:
string s = "dzdffgghdfg";
int len = s.size();
s[len-1] = 'z'; 
cout<<s[len-1];
cout<<endl;

for(int i =0;i<len;i++){
    cout<<s[i]<<" ";
}
cout<<endl;

    return 0;
}