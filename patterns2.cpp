#include<bits/stdc++.h>
using namespace std;

void printDiamond(int n){

    /*1)
            *
           * *
          * * *
         * * * *
         * * * *
          * * *
           * *
            *
    
    
    */
    for(int i =0;i<n/2;i++){
        for(int j =0;j<n-i-1;j++){
            cout<<" ";
        }
        for(int j =0;j<i+1;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i =n/2;i<n;i++){
        for(int j =0;j<i;j++){
            cout<<" ";
        }
        for(int j =0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}


void printHalfDiamond(int n){
    /* 2)

    *
    * *
    * * *
    * * * *
    * * *
    * *
    * 
    
    
    */

    for(int i =0;i<=n/2;i++){
        for(int j =0;j<i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=(n/2)+1;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}

void printZeroOneTri(int n){

    /*
    1
    01
    101
    0101
    
    */
    for(int i =0;i<n;i++){
        if(i%2==0){
            for(int j = 0;j<=i;j++){
                if(j%2==0){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            cout<<endl;
        }
        else{
            for(int j = 0;j<=i;j++){
                if(j%2!=0){
                    cout<<"1 ";
                }
                else{
                    cout<<"0 ";
                }
            }
            cout<<endl;

        }
    }

}

void hollowInvertedTriOfNum(int n){


    /*


    1      1
    12    21
    123  321
    12344321
    
    
    */
    int space = 2*(n-1);
    for(int i =0;i<n;i++){
        for(int j =0;j<=i;j++){
            
                cout<<j+1;
        }
    for(int j =0;j<=space;j++){
        cout<<" ";

    }
       
        for(int j =i;j>=0;j--){
            cout<<j+1;
        }
        cout<<endl;
        space -= 2;

    }
   
       
    }


    void numTriangle(int n){
        /*

        1
        2 3
        4 5 6
        7 8 9 10
           
        */
        int num = 1;
        for(int i =0;i<n;i++){
            for(int j =0;j<=i;j++){
                cout<<num<<" ";
                num+=1;
            }
            cout<<endl;
        }
    }


int main(){

    int t;
    cin>>t;
    for(int i =0;i<t;i++){
        int n;
        cin>>n;

        printDiamond(n);
        cout<<endl;

        printHalfDiamond(n);
        cout<<endl;

        printZeroOneTri(n);
        cout<<endl;

        hollowInvertedTriOfNum(n);
        cout<<endl;

        numTriangle(n);
        cout<<endl;
    }
    return 0;
}