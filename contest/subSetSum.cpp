#include<bits/stdc++.h>
using namespace std;
void subsetSumHelper(int ind, int n, int sum, vector<int> &nums,vector<int> &ans){
    if(n == ind){
        ans.push_back(sum);
        return;
    }
    subsetSumHelper(ind+1,n,sum+nums[ind],nums,ans);
    subsetSumHelper(ind+1,n,sum,nums,ans);
}
vector<int> subsetSum(vector<int> &arr){
    int n = arr.size();
    vector<int> ans;
    subsetSumHelper(0,n,0,arr,ans);
    sort(ans.begin(),ans.end());
    return ans;

}

int main(){
vector<int> num{3,2,1};

vector<int> answer = subsetSum(num);
for(int i = 0;i<answer.size();i++){
    cout<<answer[i]<<" ";
}
    return 0;
}