#include<bits/stdc++.h>
using namespace std;
bool codsolRec(int ind,int target,vector<int> &arr){
  if(target == 0){
    return true;
  }
  if(ind == 0){
    return arr[ind]==target;
  }
    bool notetaken = codsolRec(ind-1,target,arr);
    bool taken = false;

    if(target >= arr[0]){
        taken = codsolRec(ind-1,target-arr[ind],arr);
    }
    return taken||notetaken;

}
bool codesolMem(int ind,int target,vector<int>& arr,vector<vector<int>> &dp){
if(target == 0){
    return true;
}
if(ind == 0){
    return arr[ind] == target;
}
if(dp[ind][target] != -1){
    return dp[ind][target];
}
bool nottaken = codesolMem(ind-1,target,arr,dp);
bool taken = false;
if(arr[ind]<= target){
taken = codesolMem(ind-1,target-arr[ind],arr,dp);
}


return dp[ind][target] = taken || nottaken;
}
void codehelp(int ind,int target, vector<int> &arr,vector<vector<int>>&ans,vector<int> &ds){
    if(ind == arr.size()){
        if(target == 0){
            ans.push_back(ds);
        }
        return ;
    }
    if(target >= arr[ind]){
        ds.push_back(arr[ind]);
        codehelp(ind,target-arr[ind],arr,ans,ds);
        ds.pop_back();

    }
    codehelp(ind+1,target,arr,ans,ds);
}
vector<vector<int>> findsubste(vector<int> arr,int sum){
vector<vector<int>> ans;
vector<int> ds;
codehelp(0,sum,arr,ans,ds);
return ans;

}

int main(){
vector<int> v{2,3,7,8,10};
int n = v.size();
// vector<vector<int>> ans = findsubste(v,25);
// for(int i = 0;i<ans.size();i++){
//     for(int j = 0;j<ans[i].size();j++){
//         cout<<ans[i][j]<<" ";
//     }
//     cout<<endl;
// }
// cout<<codsolRec(n-1,35,v);
int target = 25;

vector<vector<int>> dp(n,vector<int>(target+1,0));
cout<<codesolMem(n-1,target,v,dp);
    return 0;
}