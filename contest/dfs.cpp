#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void dfs(int v,vector<int> adj[],vector<bool> visited,vector<int> &ans,int start){
        
    }
       
 
     

    }
    vector<int> dfsOfGraph(int V, vector<int> adj[]) {
        vector<int> ans;
        vector<bool> visited(V);
       
        int start = 0;
        // Code here
        dfs(start,adj,visited,ans);
        return ans;
    }
};

int main(){


    int V,E;
    cin>>V>>E;
    vector<int> adj[V];
    for(int i =0;i<E;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    Solution obj;
vector<int> asn = obj.dfsOfGraph(V,adj);
for(int i = 0;i<asn.size();i++){
    cout<<asn[i]<<" ";
}
cout<<endl;


    return 0;
}