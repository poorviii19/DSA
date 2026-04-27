#include<iostream>
using namespace std;

void transpose(int mat[][3], int n){
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
}

void reverseRows(int mat[][3], int n){
    for(int i = 0; i < n; i++){
        int left = 0, right = n - 1;
        while(left < right){
            swap(mat[i][left], mat[i][right]);
            left++;
            right--;
        }
    }
}

void reverseCols(int mat[][3], int n){
    for(int j = 0; j < n; j++){
        int top = 0, bottom = n - 1;
        while(top < bottom){
            swap(mat[top][j], mat[bottom][j]);
            top++;
            bottom--;
        }
    }
}

void rotateMat(int mat[][3], int n, int rot){
    rot = rot % 360; // normalize

    if(rot == 90){
        transpose(mat, n);
        reverseRows(mat, n);
    }
    else if(rot == 180){
        reverseRows(mat, n);
        reverseCols(mat, n);
    }
    else if(rot == 270){
        transpose(mat, n);
        reverseCols(mat, n);
    }
    else if(rot == 0){
        return; // no change
    }
    else{
        cout << "Invalid rotation! Use multiples of 90.\n";
    }
}

void printMatrix(int mat[][3], int n){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}

int main(){
    int n = 3;
    int mat[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int rot;
    cout << "Enter rotation (90, 180, 270, 360): ";
    cin >> rot;

    rotateMat(mat, n, rot);

    cout << "Rotated Matrix:\n";
    printMatrix(mat, n);

    return 0;
}