#include <bits/stdc++.h>
using namespace std;
int getMinSteps(vector<int> &arr, int i, int j)
{
    if (i == j)
        return 0;
    int mini = INT_MAX;
    for (int k = i; k <= j - 1; k++)
    {
        int steps = getMinSteps(arr, i, k) + getMinSteps(arr, k + 1, j) +  arr[i - 1]*arr[k]*arr[j] ;
        mini = min(mini, steps);
    }
    return mini;
}
int MatrixChainOrder(vector<int>&p)
{
  
int n = p.size();
    int m[n][n];
  
    int i, j, k, L, q;
  
    for (i = 1; i < n; i++)
        m[i][i] = 0;
  
    // L is chain length.
    for (L = 2; L < n; L++) {
        for (i = 1; i < n - L + 1; i++) {
            j = i + L - 1;
            m[i][j] = INT_MAX;
            for (k = i; k <= j - 1; k++) {
                // q = cost/scalar multiplications
                q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (q < m[i][j])
                    m[i][j] = q;
            }
        }
    }
  
    return m[1][n - 1];
}
int main()
{
    vector<int> arr = {1,3,1,4,1,5};

    int n = arr.size();
    cout << getMinSteps(arr,1,n-1)<<endl;
    cout<<MatrixChainOrder(arr);

    return 0;
}