#include<iostream>
#include<set>

using namespace std;


void explainSet(){
    set<int> st;   //stores unique and in sorted order
    st.insert(1);
    st.emplace(2);
    st.insert(2);  //do not stores because set stores only unique element;
    st.insert(4);
    st.insert(3);   //no matter how we are inserting but everything will be storing in sorted order
//[1,2,3,4]
    //functionality of insert in vector can also be used, that only increases efficiency
    // begin, end, rbegin, rend, size, empty, and swap are same as those above

    auto it = st.find(3);   //returns an iterator which points to 3

    auto at = st.find(6);  // as 6 is not present so it returns st.end() or we cans ay an iterator which points to the end;
    
    st.erase(3); //deletes 3 and maintain the sorted order  takes logarithmic time

    int count = st.count(1); //if exists 1 otherwise 0

    auto xt = st.find(2);
    st.erase(xt);  //takes constant time

    for(auto x: st){
        cout<<x;
    }

    st.insert(6);
    st.insert(0);
    st.insert(8);
    st.insert(9);

    auto it1 = st.find(9);
    auto it2 = st.find(6);
    st.erase(it1,it2);  //after erase{0,1,4,9}    [first, last)
    

    //lower_bound() and upper_bound() function works in the same way
    //as in vector it does


    //This is the syntax:

    auto it3  = st.lower_bound(2);
    auto it4 = st.upper_bound(6);

    // everything in set happens in O(log n) T.C.

    



}

int main(){
    explainSet();
    cout<<endl;


    return 0;
}