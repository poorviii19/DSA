#include<iostream>
#include<cstring>

using namespace std;


int myStrcmp(char s1[], char s2[]){
     //manual:
    int i =0;
    while(s1[i]!='\0' && s2[i] !='\0'){
        if(s1[i] != s2[i]){
            return s1[i] - s2[i];  //ASCII difference
        }
        i++;
    }

    return s1[i]-s2[i];   // handles different lengths
}


int main(){
    
    char s1[] = "Apple";
    char s2[] = "apple";


    //built in
    int result = strcmp(s1,s2);
    // Returns:
    //   0       if s1 == s2
    //   < 0     if s1 comes before s2 lexicographically
    //   > 0     if s1 comes after s2
    if(result<0){

        cout<<s1<<" < "<<s2<<endl;
    }
    else if(result==0){
        cout<<s1<<" = "<<s2<<endl;
    }
    else{
        cout<<s1<<" > "<<s2<<endl;
    }
    
    
    int result1 = myStrcmp(s1,s2);
    cout<<result1<<endl;
    if(result1<0){

        cout<<s1<<" < "<<s2<<endl;
    }
    else if(result1==0){
        cout<<s1<<" = "<<s2<<endl;
    }
    else{
        cout<<s1<<" > "<<s2<<endl;
    }

   


    return 0;
}