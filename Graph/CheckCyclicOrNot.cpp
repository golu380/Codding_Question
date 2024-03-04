#include<bits/stdc++.h>
using namespace std;

bool todetctcycle(vector<int> adj[],int src,int vis[]){
    queue<pair<int,int> > qu;
    vis[src] = 1;
    qu.push({src,-1});
    while(!qu.empty()){
        auto node = qu.front().first;
        auto parent = qu.front().second;
        qu.pop();

        for(auto adjacentNode : adj[node]){
            if(!vis[adjacentNode]){
                vis[adjacentNode] = 1;
                qu.push({adjacentNode, node});
            }else if(parent != adjacentNode){
                return true;
            }
        }

    }
    return false;
}

//for unconnected graph we can apply approach
bool isCycle(int v, vector<int> adj[]){
    int vis[v] = {0};
    for(int i = 0;i< v;i++){
        if(!vis[i]){
            if(todetctcycle(adj,i,vis)){
                return true;
            }
        }
    }
    return false;
}

int main(){
vector<int> adj[8] = {{},{2,3},{1,5},{1,4,6},{3},{2,7},{3,7},{5,6}};
int vis[8] = {0};
cout<<isCycle(8,adj);
cout<<todetctcycle(adj,1,vis);
    return 0;
}