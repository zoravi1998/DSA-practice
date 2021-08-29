#include<bits/stdc++.h>

using namespace std;
int ranks[100000000];
int parent[10000000];
void makeSet(int n){

    for(int i=1;i<=n;i++){
        ranks[i]=0;
        parent[i]=i;
        
    }
}

int findParent(int node){

    if(parent[node] == node)
        return parent[node];

    return parent[node] = findParent(parent[node]);
}

void Union(int u,int v){
    u=findParent(u);
    v=findParent(v);
    if(ranks[u]<ranks[v]){
        parent[u]=v;
    }
    else if(ranks[v]<ranks[u]){
        parent[v]=u;
    }
    else{
        parent[v]=u;
        ranks[u]++;
    }
}

int main(){

    int m;
    cin>>m;
    makeSet(m);
    vector<pair<int,int>>op(2);
    op[0] = make_pair(2,3);
    op[1] = make_pair(3,4);
    for(int i=0;i<2;i++){
        int u=op[i].first;
        int v=op[i].second;
        Union(u,v);
    }

    cout<<findParent(3)<<endl;
    cout<<findParent(4)<<endl;

}