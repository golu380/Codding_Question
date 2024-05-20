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
vector<vector<int>> findsubste(vector<int> arr,int sum){
vector<vector<int>> ans;
vector<int> ds;
codehelp(0,sum,arr,ans,ds);
return ans;

}

int main(){
vector<int> v{2,3,7,8,10};
vector<vector<int>> ans = findsubste(v,11);
for(int i = 0;i<ans.size();i++){
    for(int j = 0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }
    cout<<endl;
}
    return 0;
}