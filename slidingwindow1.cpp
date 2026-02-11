#include<iostream>
using namespace std;

int main(){



    // ques-1:
    
    // int arr[] ={2, 3, 8, 7, 9, 4};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int w = 3;
    // int sum = 0;

    // for( int i =0; i<3;i++){
    //     sum=sum+arr[i]; //13 |2,3,8|
    // }

    // int max = sum;
    // int in , mid, last;

    // for(int i= w;i<n; i++){
    //     // sum - first + next  
    //     sum = sum - arr[i-w] + arr[i];
    //     //  13 = 13 - arr[3-3=0] + arr[3]

    //     if(sum > max){
    //         max=sum;
    //         in = arr[i-2];
    //         mid = arr[i-1];
    //         last = arr[i];
    //     }

    // }
    // cout<<max<<" ";
    // cout<<in <<", "<<mid<<", "<< last;




    // ques-2: 

    int windowsize = 4;
    int array[] = {1,2,3,4,5,6,7,8,9,0};
    int arraysize = sizeof(array)/sizeof(array[0]);
    int total = 0;
    
    for(int i =0;i<windowsize;i++){
        total = total +array[i];
    }
    int maxx = total;
    int inn, midd1, midd2, lastt;

    for(int i = windowsize;i<arraysize;i++){
        total = total-array[i-windowsize] + array[i];

        if(total>maxx){
            maxx = total;

            inn = array[i-3];
            midd1 = array[i-2];
            midd2 = array[i-1];
            lastt = array[i];
        }
    }

    cout<<endl<<"Maximum total sum: "<<maxx<<endl;
    cout<<"Window for maximum total sum is: ["<<inn<<","<<midd1<<","<<midd2<<","<<lastt<<"]"<<endl;





    return 0;
}


