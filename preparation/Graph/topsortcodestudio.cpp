#include<bits/stdc++.h>
using namespace std;
void dfs(vector<int> adj[],int node,stack<int> &st,int vis[]){
vis[node] = true;
for(auto i : adj[node]){
    if(!vis[i]){
        dfs(adj,i,st,vis);
    }
}
st.push(node);
}
vector<int> topologicalSort(vector<vector<int>> &graph, int edges, int nodes) {
    // Write your code here!
    vector<int> adj[nodes];
  for(int i = 0;i<edges;i++){
      adj[graph[i][0]].push_back(graph[i][1]);
  }

    int visited[nodes] = {0};
    stack<int> st;
    for(int i = 0;i<nodes;i++){
        if(!visited[i]){
            dfs(adj,i,st,visited);
        }
        
    }

    vector<int> ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
   
    return ans;
}

int main(){
int nodes,edges;
cin>>nodes>>edges;
vector<vector<int>> graph(edges);

for(int i = 0;i<edges;i++){
    int u,v;
    cin>>u>>v;
   graph[i].push_back(u);
   graph[i].push_back(v);

}

// for(int i = 0;i<graph.size();i++){
//     for (int j = 0;j<graph[i].size();j++){
//         cout<<graph[i][j]<<" ";
//     }
//     cout<<endl;
// }
vector<int> ans = topologicalSort(graph,edges,nodes);
for(int i = 0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
// vector<int> adj[nodes];
// for(int i =0;i<edges;i++){
//     adj[graph[i][0]].push_back(graph[i][1]);
// }



    return 0;
}