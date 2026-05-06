#include<iostream>
#include<cstring>
using namespace std;

void toUpperCase(char str[]){
    for(int i =0; str[i]!='\0';i++){
        if(str[i]>='a' && str[i] <='z'){
            // str[i]-=32;

            //or
            // str[i] = str[i]&~32;  //(clear bit 5)

            //or

            str[i] = toupper(str[i]);  //Best handles locale
            
        }
    }
    
    cout<<str<<endl;
}
void toLowerCase(char str[]){
    for(int i =0; str[i]!='\0';i++){
        if(str[i]>='A' && str[i] <='Z'){
            // str[i]+=32;
            //or
            // str[i] = str[i] | 32;   //(set bit 5)
            
            //or
            
            str[i] = tolower(str[i]);  //Best handles locale
        }
    }

    cout<<str<<endl;
}


void toggleCase(char str[]){
    for(int i =0;str[i] != '\0' ;i++){

        if(str[i]>='a' && str[i] <= 'z'){
            // str[i] -= 32;  //bad practice

            //or

            str[i] = str[i] - 'a' + 'A';  //better approach
            
        }
        else if(str[i]>='A' && str[i] <= 'Z'){
            // str[i]+=32;
            str[i] = str[i] - 'A' + 'a';  //better approach
        }

        //or 
        // str[i] = str[i]^32;
    }

    cout<<str<<endl;
}

int main(){
    
    char str[] = "Hello";
    char str1[] = "World";

    toggleCase(str);
    toUpperCase(str);
    toLowerCase(str1);



    return 0;
}