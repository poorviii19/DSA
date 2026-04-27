#include<iostream>
using namespace std;


int main(){
    //Declaration:
    int matrix[3][4] = {
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12}
    };

    int rows = 3, cols = 4;

    //Traversal:
    for(int i =0;i<rows;i++){
        for(int j =0;j<cols;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


    int row, col;
    cout<<"Number of rows and columns: "<<endl;
    cin>>row>>col;

    int matrix1[row][col];
    cout<<"Enter elements: "<<endl;
    for(int i =0;i<row;i++){
        for(int j =0;j<col;j++){
            cin>>matrix1[i][j];
        }
    }
    cout<<"Matrix1 is: "<<endl;

   for(int i =0;i<row;i++){
    for(int j =0;j<col;j++){
        cout<<matrix1[i][j]<<" ";
    }
    cout<<endl;
   }

    


    return 0;
}