#include<bits/stdc++.h>
using namespace std;

int main(){
    int English, Maths, SocialStudies, Science, GeneralKnowledge;
    cout<<"Enter Marks of each Subject: "<<endl;
    cout<<"English: ";
    cin>>English;
    cout<<endl;
    cout<<"Maths: ";
    cin>>Maths;
    cout<<endl;
    cout<<"SocialScience: ";
    cin>>SocialStudies;
    cout<<endl;
    cout<<"Science: ";
    cin>>Science;
    cout<<endl;
    cout<<"General Knowledge: ";
    cin>>GeneralKnowledge;

    int avg = (English+Maths+SocialStudies+Science+GeneralKnowledge)/5;

    if(avg>80){
        cout<<"Eligible for Scolorship and can get admission";

    }
    else if(avg>60 && avg<80){
        cout<<"Eligible for Admission , but dont get scholorship";
    }
    else if(avg>40){
        cout<<"Requires test for admission";
    }
    else{
        cout<<"Neither eligible for scholorship nor for admission";
    }
}

