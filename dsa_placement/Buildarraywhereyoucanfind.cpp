#include<bits/stdc++.h>
using namespace std;
int searchCost(vector<int> &ds){
int maximum_value = -1;
int search_cost = -1;
for(int i = 0;i<ds.size();i++){
    if(maximum_value < ds[i]){
        maximum_value = ds[i];
        search_cost = search_cost + 1;
    }
}
return search_cost;
}
void solve(int start, int size,int k,int m, int n,vector<int> &ds,vector<vector<int>> &ans ){

    if(size== n ){
        
            ans.push_back(ds);
        
        
        return ;
    }
   
    if(start >m){
        return ;
    }
ds.push_back(start);
  solve(start,size+1,k-1,m,n,ds,ans);
ds.pop_back();
   solve(start+1,size,k,m,n,ds,ans);
   return;

}

int numOfArrays(int n, int m, int k) {
       
}

int main(){
int n,m,k;
cin>>n>>m>>k;
vector<int> ds;
vector<vector<int>> ans;
solve(1,0,k,m,n,ds,ans);

cout<<ans.size()<<endl;
for(int i = 0;i<ans.size();i++){
    for(int j = 0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}