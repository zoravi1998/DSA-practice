#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> adj[5];
    vector<int> t1;
    t1.push_back(1);
    t1.push_back(2);
    adj[0].push_back(t1);
    adj[0].push_back(t1);
    adj[0].push_back(t1);
    adj[0].push_back(t1);

    vector<vector<int>>::iterator it;
    vector<int> it2;
    for(it=adj[0].begin();it!=adj[0].end();it++){
        for(it2=it.begin();it2!=it.end();it2++){
            cout<<*it2<<",";
        }
        cout<<endl;
    }
}