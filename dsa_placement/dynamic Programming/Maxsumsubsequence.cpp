#include <bits/stdc++.h>
using namespace std;
int answerTab(vector<int> &arr, vector<int> &dp, int n)
{

    dp[0] = arr[0];
    for (int i = 1; i < n ; i++)
    {
        int pick = arr[i];
        if (i > 1)
            pick += dp[i - 2];
        int notpick = dp[i - 1];
        dp[i] = max(pick, notpick);
    }
    return dp[n - 1];
}
int answer(vector<int> &arr, int ind)
{
    if (ind < 0)
    {
        return 0;
    }
    if (ind == 0)
    {
        return arr[ind];
    }

    int pick = arr[ind] + answer(arr, ind - 2);
    int notpick = 0 + answer(arr, ind - 1);
    return max(pick, notpick);
}
int answerdp(vector<int> &arr, int ind, vector<int> &dp)
{

    if (dp[ind] != -1)
        return dp[ind];

    // Base cases
    if (ind == 0)
        return arr[ind];
    if (ind < 0)
        return 0;

    // Choose the current element or skip it, and take the maximum
     int nonPick = 0 + answerdp(arr, ind - 1, dp); 
     int pick = arr[ind];
     if(ind>1){
        pick += answerdp(arr, ind - 2, dp);
     }
     // Choosing the current element
       // Skipping the current element

    // Store the result in the DP table and return it
    return dp[ind] = max(pick, nonPick);
}
int main()
{
    vector<int> arr{2, 1, 4, 9};
    int n = arr.size();
    vector<int> dp(n, 0);
    vector<int> dp1(n, -1);
    cout << answer(arr, n - 1);
    cout << n - 1;
    cout << "hellow " << endl;

    cout << answerTab(arr, dp, n);
     cout<<answerdp(arr,n-1,dp1);
    for (int i = 0; i <= n - 1; i++)
    {
        cout << dp[i] << " ";
    }
    return 0;
}