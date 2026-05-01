#include<iostream>
using namespace std;


void sortIntervals(int intervals[][2], int n){
    for(int i =0;i<n-1;i++){
        for(int j =0;j<n-i-1;j++){
            if(intervals[j][0]>intervals[j+1][0]){
                swap(intervals[j][0],intervals[j+1][0]);
                swap(intervals[j][1],intervals[j+1][1]);
            }
        }
    }
}

int main(){

    int intervals[][2] = {{1,3},{2,6},{5,8},{15,16}};
    int n = 4;

    sortIntervals(intervals, n);

    int merged[10][2];
    int count =0;
    merged[0][0] = intervals[0][0];
    merged[0][1] = intervals[0][1];
    count = 1;

    for(int i =1;i<n;i++){
        int currS = intervals[i][0];
        int curE = intervals [i][1];
        int lastE = merged[count-1][1];

        if(currS<=lastE){
            merged[count-1][1] = max(curE, lastE);
        }
        else{
            merged[count][0] = currS;
            merged[count][1] = curE;
            count++;
        }
    }


     cout << "Merged intervals:" << endl;
    for (int i = 0; i < count; i++)
        cout << "[" << merged[i][0] << "," << merged[i][1] << "] ";
   

    



    return 0;
}