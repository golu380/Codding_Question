#include<bits/stdc++.h>
using namespace std;
bool detectCycle(int node,int vis[],vector<int> adj[], int parent){
    vis[node] = 1;
    for(auto it: adj[node]){
        if(!vis[it]){
            if(detectCycle(it,vis,adj,node) == true){
                return true;
            }
        }else if(it != parent){
            return true;
        }
    }
    return false;
}
bool isCycle(vector<int> adj[],int v){
    int vis[v] = {0};
    for(int i = 0;i<v;i++)
    {
        if(!vis[i]){
           if( detectCycle(i,vis,adj,-1)){
            return true;
           }
        }
    }
    return false;
}
int main(){
vector<int> adj[8] = {{},{2,3},{1,5},{1,4,6},{3},{2,7},{3,7},{5,6}};
if(isCycle(adj,8)){
    cout<<"Cycle is detected !"<<endl;
}else{
    cout<<"Cycle is not detected"<<endl;
}

    return 0;
}