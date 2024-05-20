//it will give wrong solution when putting cyclic directed graph

#include<bits/stdc++.h>
using namespace std;

void dfstopo(vector<int> adj[],stack<int> & st, int vis[],int node){
vis[node] = 1;
for(auto it: adj[node]){
    if(!vis[it]){
        dfstopo(adj,st,vis,it);
    }
}
st.push(node);
}

vector<int> toposort(vector<int> adj[],int v){
    vector<int> ans;
    int vis[v] = {0};

    stack<int> st;
    for(int i  = 0;i<v;i++){
        if(!vis[i]){
            dfstopo(adj,st,vis,i);
        }
    }
//  dfstopo(adj,st,vis,0);

    while (!st.empty())
    {
        int node = st.top();
        ans.push_back(node);
        st.pop();
    }
    return ans;
    
    
}

int main(){
// vector<int> adj[6] = {{}, {2}, {3}, {4, 5}, {2}, {}}; //cyclic graph
// vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}}; // acyclic graph
vector<int> adj[8] = {{1},{2},{3},{4},{5,7},{6},{4,7},{}};
int v = 8;

vector<int> ans = toposort(adj,v);
for(int i = 0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}