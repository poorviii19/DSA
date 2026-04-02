#include<iostream>
#include<map>
#include<utility>

using namespace std;

void explainMap(){
//key value pair, key can be any data type and value as well

//keeps unique keys in sorted order 
    map<int, int> map1;  //main declaration


    map<int, pair<int, int>> map2;
    map<pair<int, int>, int> map3;

    map1[1] = 2;
    map2.emplace(3,1);
    map3.insert({{5,6},7});

    map2[2] = {3,10};

    map<int, int> map4{
        {1,2},
        {2,5},
        {3,1}
    };

    for(auto it : map1){
        cout<<it.first<< " "<<it.second<<endl;
    }

    cout<<map1[1];

}

int main(){

    









    return 0;
}
