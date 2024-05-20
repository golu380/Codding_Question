#include<bits/stdc++.h>
using namespace std;

void dfs1(vector<int> adj[], stack<int> & st,int vis[],int node){
    vis[node] = 1;
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs1(adj,st,vis,it);
        }
    }
    st.push(node);
}
void dfs2(vector<int> adj[],int vis[],int node){
    vis[node] = 1;
for(auto it: adj[node]){
    if(!vis[it]){
        dfs2(adj,vis,it);
    }
}
}

int kosaraju(vector<int> adj[],int v){
stack<int> st;
int vis[v] = {0};
for(int i = 0;i<v;i++){
    if(!vis[i]){
        dfs1(adj,st,vis,i);
    }
}
//changes the direction of edges;
vector<int> adj2[v];
for(int i = 0;i<v;i++){
    vis[i] = 0;
    for(auto it : adj[i]){
        adj2[it].push_back(i);
    }
}
int ans = 0;
while(!st.empty()){
    int node = st.top();
    cout<<node<<" ";
    st.pop();
    if(!vis[node]){
        ans++;
        dfs2(adj2,vis,node);
    }
}
return ans;

}

int main(){

vector<int> adj[8] = {{1},{2},{0,3},{4},{5,7},{6},{4,7},{}};
cout<<"the number of strongly connected components is : "<<kosaraju(adj,8);
    return 0;
}