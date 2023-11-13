#include <bits/stdc++.h>
using namespace std;
int getMinSteps(vector<int> &arr, int i, int j)
{
    if (i == j)
        return 0;
    int mini = INT_MAX;
    for (int k = i; k <= j - 1; j++)
    {
        int steps = getMinSteps(arr, i, k) + getMinSteps(arr, k + 1, j) +  arr[i - 1]*arr[k]*arr[j] ;
        mini = min(mini, steps);
    }
    return mini;
}
int matrixMultiplication(vector<int>& arr, int N){
    
    int i =1;
    int j = N-1;
    
    
    return getMinSteps(arr,i,j);
    
    
}
int main()
{
    vector<int> arr{10, 20, 30, 40, 50};

    int n = arr.size();
    cout << matrixMultiplication(arr,n);

    return 0;
}