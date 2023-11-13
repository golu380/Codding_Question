#include<bits/stdc++.h>
using namespace std;

void dfs(vector<int> adj[],int start, int visited[]){
visited[start] = 1;
cout<<"->"<<start;
for(auto it : adj[start]){
if(!visited[it]){
  dfs(adj,it,visited);
}
}

}
void dfsTillTarget(vector<int> adj[],int start,int goal, int visited[]){
    visited[start] = 1;
    cout<<"->"<<start;
    if(start==goal){
       return;
    }

for(auto it : adj[start]){
if(!visited[it]){
  dfsTillTarget(adj,it,goal,visited);
}
}
}

int main(){
int n,m;
cout<<"Enter number of nodes and edges : ";
cin>>n>>m;
vector<int> adj[n+1];

cout<<"enter edges of the graph :"<<endl;
for(int i = 0;i<m;i++){
    int u, v;
    
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
}
int visited[n+1];
for(int i = 0;i<=n;i++){
    visited[i] = 0;
}
cout<<"trversing till target is "<<endl;
dfs(adj,4, visited);
int vis[n+1];
for(int i = 0;i<=n;i++){
    vis[i] = 0;
}
int goal;
cout<<"Enter goal :";
cin>>goal;

dfsTillTarget(adj,4,goal,vis);


// for(int i = 0;i<m;i++){
// int a,b;
// cin>>a>>b;
// adj1[a].push_back(b);

// }

    return 0;
}