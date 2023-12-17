#include<bits/stdc++.h>
using namespace std;

int main(){
string arr[] = {"flower","flow","flight"};
int n = sizeof(arr)/sizeof(arr[0]);
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}

sort(arr,arr+n);
cout<<endl;
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0;
}