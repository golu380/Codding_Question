#include<bits/stdc++.h>
using namespace std;

int solutionRec(vector<int> &val,int w, int ind,vector<int> &wt){
    if(ind== 0){
        if(wt[0]<=w){
            return val[0];
        }
        return 0;
    }

    int notTake = 0+solutionRec(val,w,ind-1,wt);
    int taken = INT_MIN;
    if(w>=wt[ind]){
         taken = val[ind]+solutionRec(val,w-wt[ind],ind-1,wt);
    }
    return max(taken,notTake);
}
int solutionMem(vector<int> &val,int w,int ind,vector<int> &wt,vector<vector<int>> &dp){

    if(ind == 0){
        if(wt[0]<=w){
            return val[0];
        }else{
            return 0;
        }
    }
    if(dp[ind][w] != -1){
        return dp[ind][w];
    }
    int notTaken = 0+solutionMem(val,w,ind-1,wt,dp);
    int taken = INT_MIN;
    if(w>=wt[ind]){
        taken = val[ind]+solutionMem(val,w-wt[ind],ind-1,wt,dp);
    }
    return dp[ind][w] = max(taken,notTaken);

}
int solutionTabulation(vector<int> & val,int w,int n,vector<int> &wt){
    vector<vector<int>> tb(n,vector<int>(w+1,0));
    for(int j = wt[0];j<=w;j++){
        tb[0][j] = val[0];
    }
    for(int i = 1;i<n;i++){
        for(int j = 0;j<=w;j++){
            int nottaken = 0+ tb[i-1][j];
            int taken = INT_MIN;
            if(j>=wt[i]){
                taken = val[i]+ tb[i-1][j-wt[i]];
            }
            tb[i][j] = max(taken,nottaken);
        }

    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<=w;j++){
            cout<<tb[i][j]<<" ";
        }
        cout<<endl;
    }
    return tb[n-1][w];

}
void solutionCall(vector<int> &val,int w,vector<int> &wt){
    int n = val.size();
vector<vector<int>> dp(n,vector<int>(w+1,-1));
cout<<solutionMem(val,w,n-1,wt,dp);
}
int main(){
 vector<int> wt = {3,5,7};
  vector<int> val = {3,7,12};
  int W=4;
  
  int n = wt.size();

  cout<<"using Recursion is "<<solutionRec(val,W,n-1,wt)<<endl;
  cout<<"using memoisation is: ";
  solutionCall(val,W,wt);
  cout<<endl;
  cout<<"solution with tabulation method is: ";
  cout<<solutionTabulation(val,W,n,wt);

    return 0;
}