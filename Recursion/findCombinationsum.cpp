#include<bits/stdc++.h>
using namespace std;
void codehelper(vector<int> & nums, int ind,int sum,vector<int> &ds,vector<vector<int>> &ans,int n){
    if(ind == n){
        if(sum == 0){
            ans.push_back(ds);
        }
        return;
    }
    if(nums[ind] <= sum){
        ds.push_back(nums[ind]);
        codehelper(nums,ind,sum-nums[ind],ds,ans,n);
        ds.pop_back();

    }

    
    codehelper(nums,ind+1,sum,ds,ans,n);
}
vector<vector<int>> findcombinationsubset(vector<int> & nums,int sum){
    int n = nums.size();
    vector<vector<int>> ans;
    vector<int> ds;
    codehelper(nums,0,sum,ds,ans,n);
    return ans;

}

int main(){
vector<int> nums{2,3,6,7};
int sum = 7;
vector<vector<int>> ans = findcombinationsubset(nums,sum);
for(int i = 0;i<ans.size();i++){
    for(int j  = 0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}