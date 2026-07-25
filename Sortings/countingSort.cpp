#include <iostream>
using namespace std;

void countingSort(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++)
        maxVal = max(maxVal, arr[i]);

    int k = maxVal + 1;               
    int* count = new int[k]();    
    int* output = new int[n]; 

    for (int i = 0; i < n; i++)
        count[arr[i]]++;

    for (int v = 1; v < k; v++)
        count[v] += count[v - 1];

    for (int i = n - 1; i >= 0; i--) {
        output[count[arr[i]] - 1] = arr[i];   
        count[arr[i]]--;                        
    }

    for (int i = 0; i < n; i++)
        arr[i] = output[i];

    delete[] count;
    delete[] output;
}

int main() {
    int arr[] = {5, 2, 8, 1, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    countingSort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}