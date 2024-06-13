#include<bits/stdc++.h>
using namespace std;
int solveUntil(vector<int> & nums,int ind){
    if(ind == 0){
        return nums[ind];
    }
    int notPicked = 0 + solveUntil(nums,ind-1);
    int picked = INT_MIN;

    if(ind > 1){
        picked = nums[ind] + solveUntil(nums,ind-2);
    }

    return max(picked,notPicked);
}
int solveUntildp(vector<int> & nums, vector<int> &dp,int ind){
    if(ind == 0){
        return dp[ind] = nums[ind];
    }

    if(dp[ind] != -1){
        return dp[ind];
    }
    int notpicked = 0 + solveUntildp(nums,dp,ind-1);

    int picked = INT_MIN;
    if(ind > 1){
        picked = nums[ind] + solveUntildp(nums,dp,ind-2);
    }
    return (dp[ind] = max(picked,notpicked));
}
int solutionTab(vector<int> &nums){
    int n = nums.size();
    vector<int> dp(n,-1);
   dp[0] = nums[0];
   for(int i = 1;i<n;i++){
    int pick = nums[i];
    if(i>1){
        pick += dp[i-2];
    }
    int notpicked = dp[i-1];
    dp[i] = max(pick,notpicked);
   }

   return dp[n-1];

}
int main(){

    vector<int> nums{
        30,10,60,10,50
    };
    int n = nums.size();
    vector<int> dp (n,-1);
    solveUntildp(nums,dp,4);
    for(int i = 0;i<n;i++){
        cout<<dp[i]<<" ";
    }
    cout<<endl;
    cout<<dp[n-1]<<endl;
cout<<solveUntil(nums,4)<<endl;
cout<<solutionTab(nums)<<endl;
return 0;
}