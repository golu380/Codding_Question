// The next greater element of some element x in an array is the first greater element that is to the right of x in the same array.

// You are given two distinct 0-indexed integer arrays nums1 and nums2, where nums1 is a subset of nums2.

// For each 0 <= i < nums1.length, find the index j such that nums1[i] == nums2[j] and determine the next greater element of nums2[j] in nums2. If there is no next greater element, then the answer for this query is -1.

// Return an array ans of length nums1.length such that ans[i] is the next greater element as described above.
 #include<bits/stdc++.h>
 using namespace std;
 vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_map<int,int> mp;
        stack<int> st;
        for(int i : nums2){
            while(!st.empty() && st.top() < i){
                mp[st.top()] = i;
                st.pop();
            }

            st.push(i);
        }

        for(int i : nums1){
            auto it = mp.find(i);
            if(it != mp.end()){
                ans.push_back(it->second);
            }else{
                ans.push_back(-1);
            }
        }
        return ans;
    }

int main(){

vector<int> nums1{2,4},nums2{1,2,3,4},answer;
answer = nextGreaterElement(nums1,nums2);
for(auto i: answer){
    cout<<i<<" ";
}

    return 0;
}