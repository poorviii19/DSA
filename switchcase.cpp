#include<bits/stdc++.h>
using namespace std;

int main(){

    int day;
    cin>>day;


    // it is an alternative to if else conditional method, break keyword is need to break out all conditionas
    //  above that had been checked so that their output will be not generated.
    // default case is required if no condition/case is  matched. 

    switch(day){
        case 1:
        cout<<"Monday";
        break;
        case 2:
        cout<<"Tuesday";
        break;
        case 3:
        cout<<"Wednesday";
        break;
        case 4:
        cout<<"Thursday";
        break;
        case 5:
        cout<<"Friday";
        break;
        case 6:
        cout<<"Saturday";
        break;
        case 7:
        cout<<"Sunday";
        break;
        default:
        cout<<"Enter valid day number";
    }
    return 0;
}