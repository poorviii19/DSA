#include<iostream>
using namespace std;

void transposeMatrix(int matrix[][100], int n){  //giving the size of column is must

//     In C++, when passing a 2D array, you must specify the column size.
// The compiler needs it to calculate memory offsets.


    for(int i =0;i<n;i++){
        for(int j =i+1;j<n;j++){
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }
    }
}

int main(){
   int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    int matrix[100][100];

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    transposeMatrix(matrix, n);

    cout << "Transposed Matrix:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}