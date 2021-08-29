#include<bits/stdc++.h>

using namespace std;

vector<int> topoSort(int V, vector<int> adj[]) 
{
    vector<bool> vis(V);
    vector<int> res;
    int indegree[V];
    queue<int> q;

    for(int i=0;i<V;i++)
    vis[i]=false;

    for(int i=0;i<V;i++)
    indegree[i]=0;

    //calculating indegree
    for(int i=0;i<V;i++)
    {
        for(int u:adj[i])
        {
            indegree[u]++;
        }
    }
    
    //finding vertices with indegree 0
    for(int x=0;x<V;x++)
    {
        if(indegree[x]==0)
            q.push(x);
    }
    
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        res.push_back(u);
        for(auto v:adj[u])
        {
            if(--indegree[v]==0)
                q.push(v);
        }
    }
    return res;    
}
int main()
{
    int E,N;
    cin>>E>>N;
    vector<int> adj[N];
    vector<int> res;
    int u,v;
    for (int i = 0; i < E; i++) {
            cin >> u >> v;
            adj[u].push_back(v);
    }
    res=topoSort(N,adj);

    for(auto u:res)
    {
        cout<<u<<",";
    }
}