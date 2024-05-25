#include<bits/stdc++.h>
using namespace std;
void solve(int ind,int n,vector<int> &arr,vector<int> & ans,int sum){

    if(ind == n){
        ans.push_back(sum);
        return;
    }
    
    solve(ind+1,n,arr,ans,arr[ind]+sum);
    solve(ind+1,n,arr,ans,sum);
}
vector<int>subsetsum(vector<int> arr,int n ){
    vector<int> ans;
    solve(0,n,arr,ans,0);
   
    return ans;

}
int main(){

vector<int> arr{3,2,1};
int n = arr.size();
vector<int> answer = subsetsum(arr,n);
 for(int i = 0;i<answer.size();i++){
        cout<<answer[i]<<" ";
    }
    return 0;
}