#include<bits/stdc++.h>
using namespace std;
bool topologicalsort(vector<int> adj[], int v){
    int indgree[v] = {0};
    int cnt = 0;
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
        cnt++;
        qu.pop();
        for(auto it: adj[node]){
            indgree[it]--;
            if(indgree[it] == 0){
                qu.push(it);
            }
        }
    }

   if(cnt == v){
    return false;
   }
   return true;

}

int main()
{
vector<int> adj[6] = {{}, {2}, {3}, {4, 5}, {2}, {}};
int v = 6;
bool ans = topologicalsort(adj,v);
if(ans){
    cout<<"Cycle found"<<endl;

}else{
    cout<<"Cycle Not found"<<endl;
}
    return 0;
}