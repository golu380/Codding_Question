#include<bits/stdc++.h>
using namespace std;

bool dfs(int node, int col ,int color[],vector<int> adj[]){
    color[node] = col;
    for(auto it  : adj[node]){

        if(color[it] == -1){
            if(dfs(it,!col,color,adj) == false){
                return false;
            }
        }else if(color[it] == col){
                return false;
            }
    }
    return true;
}
bool isBipatraite(vector<vector<int>> &graph){
int n = graph.size();
vector<int> adj[n];
for(int i = 0;i<n;i++){
   for(int j = 0;j<graph[i].size();j++){
    adj[i].push_back(graph[i][j]);

   }
}
int color[n] ;
for(int i = 0;i<n;i++){
    color[i] = -1;
}
for(int i=0;i<n;i++){
    for(auto it: adj[i]){
        cout<<it<<" ";
    }
    cout<<endl;
}

for(int i = 0;i<n;i++){
    if(color[i] == -1){
       if(dfs(i,0,color,adj) == false) {
        return false;
       }
    }
   
}
 return true;
}
int main(){
// vector<vector<int>> graph{{1,2,3},{0,2},{0,1,3},{0,2}};
vector<vector<int>> graph{{1,3},{0,2},{1,3},{0,2}};
cout<<isBipatraite(graph)<<endl;

    return 0;
}