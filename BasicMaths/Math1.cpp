#include<iostream>
#include<math.h>
#include<vector>
#include<algorithm>
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

bool validpalindrome(int n){

    int rev = 0;
    int p =n;
    while(p>0){
        int last = p%10;
        rev = rev*10+last;
        p = p/10;
    }
    if(rev==n){
        return 1;
    }
    return 0;
}


int reversenum(int n){
    int rev = 0;
    
    while(n>0){
        int last = n%10;
        rev = rev*10+last;
        n = n/10;
    }
    return rev;
}


bool armstrongNumber(int n){
    int sum = 0;
    int p = n;
    
    while(n>0){
        int last = n%10;
        sum = sum+(last*last*last);
        n= n/10;
    }
    if(p==sum){
        return 1;
    }
    return 0;
    
    
}


void printAllDivisors(int n){
    for(int i =1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }

    cout<<endl;

    vector<int> vect;


    //T.C: O(sqrt(n))
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            vect.push_back(i);
            if((n/i)!=i){
                vect.push_back(n/i);
            }
        }
    }

    //O(n log n): n is the number of factors
    sort(vect.begin(),vect.end());


    //O(number of factors)
    for(auto it: vect){
        cout<<it<<" ";
    }
    cout<<endl;

}

void checkPrimeNumber(int n){
    int count = 0;
    for(int i =1;i*i<=n;i++){
        if(n%i==0){
            count++;
            if((n/i)!=i) count++;
        }
    }
    if(count == 2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    
}


int gcdOfTwoNum(int n1, int n2){


    while(n1>0 && n2>0){
        if(n1>n2) n1 = n1%n2;
        else n2 = n2%n1;

    }
    if(n1 == 0) return n2;
    return n1;
}


int main(){
    int n, m;
    cin>>n>>m;
    int ans = countDigits(n);
    cout<<ans<<endl;

    int ans1 = countDigits1(n);
    cout<<ans1<<endl;

    int ans3 = validpalindrome(n);
    cout<<ans3<<endl;

    int reverse = reversenum(n);
    cout<<reverse<<endl;

    int arm = armstrongNumber(n);
    cout<<arm<<"\n";

    printAllDivisors(n);

    checkPrimeNumber(n);
    cout<<"\n";

    int GCD = gcdOfTwoNum(n, m);
    cout<<GCD<<" ";
    cout<<endl;
    


    return 0;
}

