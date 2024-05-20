#include<bits/stdc++.h>
using namespace std;
bool isbipatritedfs(vector<int> adj[], int color[],int col ,int node){
    color[node] = col;
    for(auto it: adj[node]){
        if(color[it] == -1){
            isbipatritedfs(adj,color,!col,it);
        }else if(color[it] == col){
            return false;
        }
    }
    return true;
}
bool isBipatrite(vector<int> adj[],int v){
    int color[v];
 for(int i = 0;i<v;i++){
    color[i] = -1;
 }

    for(int i = 0;i<v;i++){
        if(color[i] == -1){
            if(isbipatritedfs(adj,color,0,0) == false){
                return false;
            }
        }
    }

    return true;
}

int main(){
int v = 10;
vector<int> adj[v] = {{1},{0,2},{1,3,5},{2,4},{3,7},{2,6},{5,7},{4,6,8},{7,9},{8}};
bool ans = isBipatrite(adj,v);

if(ans){
    cout<<"it is bipatrite graph"<<endl;

}else{
    cout<<"it is not bipatrite graph"<<endl;
}

    return 0;
}