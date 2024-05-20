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

int main()
{
// vector<int> adj[6] = {{}, {2}, {3}, {4, 5}, {2}, {}}; // cyclic graph
vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}}; // acyclic graph
int v = 6;
vector<int> ans = topologicalsort(adj,v);
for(auto it : ans){
    cout<<it<<" ";
}

    return 0;
}