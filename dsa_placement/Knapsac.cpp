#include<bits/stdc++.h>
using namespace std;
int solutionTabulation(vector<int> & val,int w,int n,vector<int> &wt){
    vector<vector<int>> tb(n,vector<int>(w+1,0));
    for(int i = wt[0];i<=w;i++){
        tb[0][i] = val[0];
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
    return tb[n-1][w];

}
int main(){
vector<int> wt = {1,2,4,5};
  vector<int> val = {5,4,8,6};
  int W=5;
  
  int n = wt.size();
  cout<<"solution with tabulation method is: ";
  cout<<solutionTabulation(val,W,n,wt);
    return 0;
}