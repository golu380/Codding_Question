//  A = [4, 5, 2, 10, 8]
// Output 1:
// G = [-1, 4, -1, 2, 2]

#include<bits/stdc++.h>
using namespace std;
vector<int> nextSmaller(vector<int> nums){
    int n = nums.size();
vector<int> ans;
unordered_map<int,int> mp;
stack<int> st;

for(int i = n-1;i>=0;i--){
    while(!st.empty() && nums[i] < st.top()){
        mp[st.top()] = nums[i];
        st.pop();
    }
    st.push(nums[i]);
}
for(auto i: nums){
    const auto it = mp.find(i);
    if(it != mp.end()){
        ans.push_back(it->second);
    }else{
        ans.push_back(-1);
    }
}
return ans;
}
int main(){
vector<int> nums{4,5,2,10,8},answer;
answer = nextSmaller(nums);

for(auto i: answer){
    cout<<i<<" ";
}

    return 0;
}