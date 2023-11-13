#include<bits/stdc++.h>
using namespace std;
bool isSubsetSum(int arr[], int n, int sum)
{

    bool subarr[n + 1][sum + 1];
 
    for (int i = 0; i <= n; i++)
        subarr[i][0] = true;

    for (int i = 1; i <= sum; i++)
        subarr[0][i] = false;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum; j++) {
            if (j < arr[i - 1])
                subarr[i][j] = subarr[i - 1][j];
            if (j >= arr[i - 1])
                subarr[i][j]= subarr[i - 1][j] || subarr[i - 1][j - arr[i - 1]];
        }
    }

    
 
    return subarr[n][sum];
}
int  main(){
int arr[] = {2,3,7,8,10};
int n = sizeof(arr)/sizeof(arr[0]);
int sum = 11;
cout<<isSubsetSum(arr,n,sum)<<endl;
    return 0;
}