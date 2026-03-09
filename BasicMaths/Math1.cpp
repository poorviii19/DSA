#include<iostream>
#include<math.h>
using namespace std;



int countDigits(int n){   //T.C. O(log10(N))
    //count number of digits in a given number
    int digits = 0;
    while(n>0){
        digits++;
        n= n/10;
    }
    return digits;
    
}
int countDigits1(int n){
    //count number of digits in a given number by logarithmic method
    int digits = (int) (log10(n)+1);
    return digits;

}

int main(){
    int n;
    cin>>n;
    int ans = countDigits(n);
    cout<<ans<<endl;
    int ans1 = countDigits1(n);
    cout<<ans1<<endl;

    return 0;
}

