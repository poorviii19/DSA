#include<iostream>
using namespace std;


int main(){
    int arr[] = {3,1,4,3,2,5,2,6,8,5};
    int n = sizeof(arr)/sizeof(arr[0]);


    // Step 1: Find max element
    int maxVal = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > maxVal){
            maxVal = arr[i];
        }
    }



    // Step 2: Create frequency array based on max value
    int frequency[maxVal + 1] = {0};


    // Step 3: Count frequency
    for(int i =0;i<n;i++){
        frequency[arr[i]]++;
    }

    // Step 4: Print frequencies
    for(int i = 0; i <= maxVal; i++){
        if(frequency[i] > 0){
            cout << "Frequency of element " << i << " is " << frequency[i] << endl;
        }
    }

    // Step 5: Find max frequency element
    int maxFreq = 0; 
    int maxElem = 0;

    for(int i =0;i<maxVal;i++){
        if(frequency[i]>maxFreq){
            maxFreq = frequency[i];
            maxElem = i;
        }
    }

    cout<<"Element with maximum frequency: "<<maxElem<<endl;



    return 0;
}