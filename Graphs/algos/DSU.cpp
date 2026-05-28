#include<iostream>
#include<vector>

using namespace std;

void makeset(vector<int> &parent, vector<int> &rank, int n){
    for(int i =0 ;i<n;i++){
        parent[i] = i;
        rank[i] = 0;
    }
}

int findParent(vector<int> &parent, int node){
    if(parent[node] == node){
        return node;
    }
    return parent[node] = findParent(parent, parent[node]);
}

void unionSet(vector<int> &parent, vector<int> &rank, int u, int v){
    int Pu = findParent(parent, u);
    int Pv = findParent(parent, v);

    if(Pu == Pv){
        return;
    }
    if(rank[Pu]<rank[Pv]){
        parent[Pu] = Pv;
    }
    else if(rank[Pu]>rank[Pv]){
        parent[Pv] = Pu;
    }
    else{
        parent[Pv] = Pu;
        rank[Pu]++;
    }

}

int main(){

    int n,e;
    cin>>n>>e;

    vector<int> parent(n);
    vector<int> rank(n);
    makeset(parent, rank, n);

    for(int i =0;i<e;i++){
        int u, v;
        cin>>u>>v;
        unionSet(parent, rank, u, v);

        
        
    }

    for(int i=0;i<n;i++){
        cout << i << " -> " << findParent(parent,i) << endl;
    }


    int u, v;
    cin >> u >> v;

    if(findParent(parent, u) == findParent(parent, v)){
        cout << "Same Set";
    }
    else{
        cout << "Different Set";
    }


    return 0;
}