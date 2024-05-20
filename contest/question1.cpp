#include <bits/stdc++.h>
using namespace std;
int getIndex(int arr[], int elem, int n)
{
     
    
 
    int i = 0;
    while (i < n)
    {
        if (arr[i] == elem) {
            break;
        }
        i++;
    }
 
    if (i < n)
    {
        return i;
    }
    else {
      return -1;
    }
}
int main()
{

    // int arr[] ={4,5,3,6,8,12};
    // int n  = sizeof(arr)/sizeof(arr[0]);
    // cout<<getIndex(arr,6,n);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            if (k >= a[i])
            {
                v.push_back(a[i]);
            }
            else
            {
                continue;
            }
        }

        if (v.size() == 0)
        {
            cout << k << endl;
        }
        else
        {
            sort(v.begin(), v.end());
            int ab = 0;
            for(int i =0;i<v.size;i++){
               
            }
            int ab = getIndex(a, v[0], n);
            cout << ab << endl;
        }
    }

    return 0;
}