#include<bits/stdc++.h>
using namespace std;

vector<int> topologicalSortUsingBfs(vector<int> adj[], int v){
    int indegree[v] = {0};
    for(int i =0;i<v;i++){
        for(auto it: adj[i]){
            indegree[it]++;
        }
    }
    queue<int> q;
    for(int i = 0;i<v;i++){
        if(indegree[i] == 0){
            q.push(i);
        }
    }
    vector<int> ans ;
    while(!q.empty()){
        int node = q.front();
        ans.push_back(node);
        q.pop();
        for(auto it: adj[node]){
            indegree[it]--;
            if(indegree[it] == 0){
                q.push(it);
            }
        }
    }
    return ans;
}

int main(){
vector<int> adj[6] = {{}, {}, {3}, {1}, {0, 1}, {0, 2}};
int V = 6;
vector<int> ans = topologicalSortUsingBfs(adj,V);
for(auto i : ans){
    cout<<i<<' ';
}
    return 0;

}