#include<bits/stdc++.h>
using namespace std;

void bfs(int start ,vector<int> adj[], int v){
    queue<int> qu;
    int vis[v] = {0};
    vis[start] = 1;
    qu.push(start);

    while(!qu.empty()){
        auto node = qu.front();
        cout<<node<<" ";
        qu.pop();
        for(auto it: adj[node]){
            if(!vis[it]){
                vis[it] = 1;
                qu.push(it);
            }
        }

    }

}

void dfs(int node, vector<int> adj[],int vis[],vector<int> &ls){
     vis[node] = 1;
    ls.push_back(node);
    for(auto it : adj[node]){
        if(!vis[it]){
            dfs(it,adj,vis,ls);
        }
    }
   

}

vector<int> dfsArray(int v, vector<int> adj[]){
    int vis[v] = {0};
    int start = 0;
    vector<int> ls;
    dfs(start,adj,vis,ls);
    return ls;
}

void addEdge(vector<int> adj[], int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);

}
void printAns(vector<int> & ans){
    for(int i = 0;i< ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
int main(){
vector<int> adj[5];
addEdge(adj,0,2);
addEdge(adj,2,4);
addEdge(adj,0,1);
addEdge(adj,0,3);

vector<int> ans = dfsArray(5,adj);

printAns(ans);

cout<<endl;

bfs(0,adj,5);


    return 0;
}