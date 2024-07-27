#include<bits/stdc++.h>
using namespace std;

vector<int> topologicalsort(vector<int> adj[], int v){
    int indgree[v] = {0};
    vector<int> ans;
    for(int i = 0;i<v;i++){
        for(auto it: adj[i]){
            indgree[it]++;
        }
    }
    queue<int> qu;
    for(int i = 0;i<v;i++){
        if(indgree[i] == 0){
            qu.push(i);
        }
    }
    while(!qu.empty()){
        int node = qu.front();
        ans.push_back(node);
        qu.pop();
        for(auto it: adj[node]){
            indgree[it]--;
            if(indgree[it] == 0){
                qu.push(it);
            }
        }
    }

    return ans;

}
void topologicalsortdfs(int vis[],vector<int> adj[], stack<int> &st,int node){
    vis[node] = 1;

    for(auto it : adj[node]){
        if(!vis[it]){
            topologicalsortdfs(vis,adj,st,it);
        }
    }
    st.push(node);

}
int main()
{
// vector<int> adj[6] = {{}, {2}, {3}, {4, 5}, {2}, {}}; // cyclic graph
vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}}; // acyclic graph
vector<int>adj1[6] = {{1,4},{2},{3},{},{2,5},{3}};
// int v = 6;
// vector<int> ans = topologicalsort(adj,v);
// for(auto it : ans){
//     cout<<it<<" ";
// }
stack<int> st;
int vis[6] = {0};
for(int i = 0;i<6;i++){
    if(!vis[i]){
        topologicalsortdfs(vis,adj1,st,i);
    }
}
// topologicalsortdfs(vis,adj1,st,0);
while(!st.empty()){
    cout<<st.top()<<" ";
    st.pop();
}
    return 0;
}