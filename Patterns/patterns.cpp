#include<bits/stdc++.h>
using namespace std;

void printSqur(int n){
    
        // 1)
        //* * * *
        //* * * *
        //* * * *
        //* * * * 

    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }

}

void printRightTri(int n){

    /*  2)
    *
    *  *
    *  * *
    *  * * *
    *  * * * *
    *  * * * * *
      
    */ 
    
    
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    
    }
}

void  printInvertedRightTri(int n){
    /*3)

    * * * *
    * * *
    * * 
    * 
    
     */

     for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
                cout<<"* ";
        }
        cout<<endl;

     }
}

void printNumRightTri(int n){
    /*4)
    1
    1 2
    1 2 3
    1 2 3 4

    */

    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<j+1<<" ";

        }
        cout<<endl;
    }

}
void printNum1RightTri(int n){
    /*5)
    1
    2 2
    3 3 3
    4 4 4 4

    */

    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            cout<<i+1<<" ";

        }
        cout<<endl;
    }

}

void printNum2InvertedRightTri(int n){
    /*6)
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2 
    1
    */

    for(int i =0;i<n;i++){
        for(int j =0;j<n-i;j++){
            cout<<j+1<<" ";
        }
        cout<<endl;
    }
}

void printTriangle(int n){
    /*7)
        *
      *   *
    *   *   *
  *   *   *   *
    
    */

    for(int i =0;i<n;i++){
        // space:
        
        for(int j=0;j<n-i-1;j++){
           cout<< " ";
        }

        //   for stars:
        for(int j =0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
        
    }

}

void printInvertedTriangle(int n){
    /*8)

    * * * * 
     * * *
      * *
       *
    */

    for(int i =0;i<n;i++){

        // for space:
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        // for stars:

        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


int main(){

    // outer loop-> rows:
    // inner loop: columns:
    // print inside the inner for loop
    // observe symmetry(optional)

    int t;
    cin>>t;
    for(int i =0; i<t; i++){
        int n;
        cin>>n;
        
            printSqur(n);
            cout<<endl;

            printRightTri(n);
            cout<<endl;

            printInvertedRightTri(n);
            cout<<endl;

            printNumRightTri(n);
            cout<<endl;

            printNum1RightTri(n);
            cout<<endl;

            printNum2InvertedRightTri(n);
            cout<<endl;
            
            printTriangle(n);
            cout<<endl;

            printInvertedTriangle(n);
            cout<<endl;




    }

    return 0;
}