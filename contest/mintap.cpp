#include<bits/stdc++.h>
using namespace std;

int minCntFoun(int a[],int n){
    int dp[n+1];
    for(int i = 0;i<n+1;i++){
        dp[i] = -1;
    }
    int idxleft ;
    int idxright;
    for(int i = 0;i<n+1;i++){
        idxleft =  max(i-a[i],0);
        idxright = min(i+(a[i]),n);
        dp[idxleft] = max(dp[idxleft],idxright);
    }
    int cntfount = 1;
    idxright = dp[0];
    int idxNext =-1;
    for(int i = 0;i<n;i++){
        cout<<dp[i]<<" ";
    }
    for(int i = 0;i<n;i++){
        idxNext = max(idxNext,dp[i]);
        if(i == idxright){
            cntfount++;
            idxright = idxNext;
        }
    }
return cntfount;
}

int main(){

int arr[] = {1,2,1,0,2,1,0};
int n = 7;
cout<<minCntFoun(arr,n);
    return 0;
}