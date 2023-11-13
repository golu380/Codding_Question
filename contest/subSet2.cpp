#include<bits/stdc++.h>
using namespace std;
void subSet2Helper(int ind, vector<int> &nums,vector<int> &ds, vector<vector<int> > &ans,int n ){
ans.push_back(ds);
for(int i = ind;i<nums.size();i++){
    if(i != ind && nums[i] == nums[i-1]){
        continue;
    }
    ds.push_back(nums[i]);
    subSet2Helper(i+1,nums,ds,ans,n);
    ds.pop_back();


}

}
vector<vector<int>> subSet2(vector<int> & nums, int n){
sort(nums.begin(),nums.end());
vector<vector<int> > ans;
vector<int>ds;
subSet2Helper(0,nums,ds,ans,n);
return ans;
}

int main(){

vector<int> nums{1,1,3};
vector<vector<int>> answer = subSet2(nums,nums.size());
for(int i = 0;i<answer.size();i++){
    for(int j = 0;j<answer[i].size();j++){
        cout<<answer[i][j]<<" ";
    }
    cout<<endl;
}

    return 0;
}