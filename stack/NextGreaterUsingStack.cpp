//input array is circular array 

#include<bits/stdc++.h>
using namespace std;
vector<int> nextgreater(vector<int> arr,int n){
    vector<int> ans(n,-1);
    stack<int> st;
    for(int i = 2*n-1;i>=0;i--){
        while(!st.empty() && st.top() <= arr[i%n]){
            st.pop();
        }
        if(i<n){
            if(!st.empty()){
                ans[i] = st.top();
            }
        }
        st.push(arr[i%n]);
    }
    return ans;

}

int main(){

vector<int> arr{5,7,1,2,6,0};
int n = arr.size();
vector<int> ans = nextgreater(arr,n);
for(auto i : ans){
    cout<<i<<" ";
}
    return 0;
}