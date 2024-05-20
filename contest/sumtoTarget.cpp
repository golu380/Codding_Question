#include<bits/stdc++.h>
using namespace std;

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


vector<vector<int>> findSubsetsThatSumToK(vector<int> arr, int target)
{
    // Write your code here.
   
    vector<vector<int>> ans;
    vector<int> ds;

    codehelp(0,target, arr, ans,ds);

    return ans;

    
}
int main(){
// 5
// 5 -2 0 -5 2 
// 0

vector<int> nums{5 ,-2 ,0 ,-5 ,2};
int n = nums.size();
int target = 0;
vector<vector<int>> answer = findSubsetsThatSumToK(nums,target);
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cout<<answer[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}