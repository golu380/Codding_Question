#include<bits/stdc++.h>
using namespace std;
int countVersionPairingarray(vector<int> &arr){
    int cnt = 0;
    int n = arr.size();
    for(int i = 0;i<n-1;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i] > arr[j]){
                cnt++;
            }
        }
    }
    return cnt;

}

int main(){

vector<int> arr{5,4,3,2,1};
int ans = countVersionPairingarray(arr);
cout<<ans<<" ";
    return 0;
}