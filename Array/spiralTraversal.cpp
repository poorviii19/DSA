#include<iostream>
using namespace std;


int main(){

    int matrix[4][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };


    int row = 4;
    int col = 4;
    int left =0, top = 0;
    int right = col-1;
    int bottom = row-1;


    while(left<=right && top<=bottom){
        for(int i = left;i<=right;i++){
            cout<<matrix[top][i]<<"->";
        }
        top++;

        for(int i = top;i<=bottom;i++){
            cout<<matrix[i][right]<<"->";
        }
        right--;

        if(top<=bottom){
            for(int i = right; i>=left;i--){
                cout<<matrix[bottom][i]<<"->";
            }
            bottom--;
        }

        if(left<=right){
            for(int i =bottom;i>=top;i--){
                cout<<matrix[i][left]<<"->";
            }
            left++;
        }
    }


    return 0;
}