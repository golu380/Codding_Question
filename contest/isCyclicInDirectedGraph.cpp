#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool isCyclic(int v,vector<int> adj[]){
        int indegree[v] = {0};
        for(int i = 0;i<v;i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i= 0;i<v;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        int cnt = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cnt++;
            for(auto it:adj[node]){
                indegree[node]--;
                if(indegree[node] == 0){
                    q.push(it);
                }
            }
        }
        if(cnt == v){
            return  false;
        }
        return true;
    }

};

int main(){
vector<int> adj[6] = {{},{2},{3},{4,5},{2},{}};
int V= 6;
Solution obj;
bool ans = obj.isCyclic(V,adj);
if(ans){
    cout<<"True";
}else{
    cout<<"False";
}
cout<<endl;
    return 0;
}