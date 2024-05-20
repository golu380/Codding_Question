#include<bits/stdc++.h>
using namespace std;
int f(vector<int> & arr,int i, int j){
    if( i == j)
    return 0;
    int mini = INT_MAX;
    for(int k = i; k<= j-1;k++){
        int ans = f(arr,i,k) + f(arr,k+1,j) + arr[i-1]*arr[k]*arr[j];
        mini = min(mini,ans);
    }
    return mini;
}

int matrixMultiplication(vector<int> &arr,int n){
    int i = 1;
    int j = n-1;
    return f(arr,i,j);
}

int main(){
    vector<int> arr = {10,20,30,40,50};
    int n = arr.size();
    cout<<"the minimum number of operations is: "<<matrixMultiplication(arr,n);
    return 0;
}