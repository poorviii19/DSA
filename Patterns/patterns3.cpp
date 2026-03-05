#include<bits/stdc++.h>
using namespace std;

void alphabetTriangle(int num){

    //pattern1
    for(int i =0;i<num;i++){
        for(char ch = 'A'; ch<='A'+i; ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    cout <<endl;
    //pattern2

    for(int i =0;i<num;i++){
        for(char ch = 'A'+(num-i-1); ch>='A'; ch--){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //pattern3
    for(int i =0;i<num;i++){
        for(char ch ='A';ch <= 'A'+(num-i-1); ch++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    cout<<endl;

    //pattern4

    for(int i =0;i<num;i++){
        char ch = 'A'+i;
        for(int j =0;j<=i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
    }

    //pattern5

    for(int i =0;i<num;i++){

        for(int j =0;j<num-i-1;j++){
            cout<<" ";
        }

        char ch = 'A';
        int breakpoint = (2*i+1)/2;

        for(int j =1;j<=2*i+1;j++){
            cout<<ch;
            if(j <= breakpoint){

                ch++;
            }else{

                ch--;
            }
        }


        for(int j =0;j<num-i-1;j++){
            cout<<" ";
        }
        cout<<endl;
    }



//pattern6

for(int i=0;i<num;i++){
    for(char ch = 'E'-i;ch<='E';ch++){
        cout<<ch;
    }
    cout<<endl;
}

}


void starPattern(int num){



    /*
    ****
    *  *
    *  *
    ****
    
    */
    for(int i =0;i<num;i++){

        if(i==0 || i == num-1){

            for(int j=0;j<num;j++){


                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int j =0;j<num;j++){
                if(j==0 || j==num-1){
                    cout<<"*";
                }
                else{
                    cout<<" ";
                }
            }
            cout<<endl;
        }
        }
    
}

int main(){
    int num;
    cin>> num;

    alphabetTriangle(num);
    cout<<endl;
    starPattern(num);

    return 0;
}