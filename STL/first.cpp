#include<iostream>
#include<vector>
#include<utility>
using namespace std;

void explainPair(){   

    // pairs   In C++, a pair is a simple container that stores two values 
    // together as a single unit. These two values can be of different data types.
    //  It is provided in the Standard Template Library (STL) and defined in the header:  #include<utility>


    // first value is called first and the second value is called second.  pair<data_type1, data_type2> variable_name;

    //initialisation:
    // pair<int, int> p(10, 20);
    // pair<int, int> p = make_pair(10, 20);
    // Pairs can be compared automatically.

    pair<int,int>p = {1,3};
    cout<<p.first<<" "<<p.second<<endl;

    // nested pairs
    pair<int,pair<int,int>>p1 = {1,{3,4}};
    cout<<p1.first<<" "<< p1.second.second<<endl;
    pair<int,int> arr[] = {{1,2},{2,5},{5,6}};
    cout<<arr[1].second;

}


void explainVector(){

    // vector is a dynamic memory version of an array
    // if already we have decided the size of vector but still want to insert 
    // more elements then we can do it  because vector have dynamic memory.

    // stl use for this is <vector>
    vector<int> v;
    v.push_back(1);   //push back is use to insert element , dunamically increases the size and push the element at back or at selected position
    v.emplace_back(2);  //same functioning as push_back but generally faster.

    // /vector of pair data type:
    vector<pair<int,int>>vect;
    vect.push_back({1,2});
    vect.emplace_back(1,2);


    vector<int>v1(5);  //vector of size 5 initially stores garbage value
    vector<int>v2(v1);  //vector v1 get copied in v2

    vector<int>v3(5,100);  //vector of size 5 and all fixed values are 100
    vector<int>v4(v3);   //vector v3 get copied in v4



    // iterator: points to memory address,  such as v.begin() points the starting elememnt's memory in vector
    //datastructure<data_type>::iteratoe variable_name = vectorname.begin();
    vector<int>::iterator it = v.begin();  //here it is pointing to memory
    it++;
    cout<<*(it)<<" ";   //in order to access anything(element) that is in shared memory we write it with *;

    it = it+2;   //shifted by 2 positions
    cout<<*(it)<<" ";


    vector<int>::iterator it = v.end();

    // vector<int>::iterator it = v.rend();

    // vector<int>::iterator it = v.rbegin();   these both are not used
    cout<<v[0]<<" "<<v.at(0);


    cout<<v.back()<<" ";


    for(vector<int>::iterator it = v.begin();it != v.end(); it++){
        cout<<*(it)<<" ";
    }

    //short way:
    for(auto it = v.begin();it != v.end();it++){
        cout<<*(it)<<" ";
    }

    for(auto it:v){
        cout<<it<<" ";
    }   //auto automaticaly assigns datatype as vector iterator or to particular datatype



    // deletion in vector:

    v.erase(v.begin()+1); //to erase single element

    v.erase(v.begin()+2, v.begin()+4);  //Erases elements from something to something-1(index)


    // Insert Function

    vector<int> vectt(2,100);   //{100,100}
    vectt.insert(v.begin(),300);  //{300,100,100}
    vectt.insert(v.begin()+1,2,10); //{300,10,10,100,100}

    vector<int> copy(2.50);  //{50,50}
    vectt.insert(vectt.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}


    cout<<vectt.size(); //gives the size of vector

    v.pop_back(); //deletes from last

    vectt.swap(v);  // swaps both the vectors


    v.clear(); // erases the entire vector;

    cout<<v.empty();  //checks whether empty or not
    

}



int main(){

    explainPair();
    cout<<endl;

    explainVector();
    cout<<endl;

    return 0;
}