#include<bits/stdc++.h>
using namespace std;

vector<vector<bool>> subarrtargetDP(vector<int> &arr,int target){
    int n = arr.size();
    vector<vector<bool>> dp(n+1,vector<bool>(target+1,false));
    for(int i = 0; i<=n;i++){
        dp[i][0] = true;
    }
} 
int main(){
vector<int> arr{2,3,5,7};
int target = 7;
vector<vector<bool>> subarr = subarrtargetDP(arr,target);


    return 0;
}