#include<bits/stdc++.h>

using namespace std;
class Solution {
  public:
  vector<int> solve(vector<int> & nums){
    int n = nums.size();
    vector<int> ans(n,-1);
    stack<int> st;
    st.push(nums[0]);
    for(int i = 1;i<n;i++){
        if(st.empty()){ st.push(nums[i]);}
       
        while(!st.empty() && st.top() < nums[i]){
            ans[i-1] = nums[i];
            st.pop();
        }
        st.push(nums[i]);
    }
    return ans;
  }
    vector < int > nextGreaterElements(vector < int > & nums) {
      int n = nums.size();
      vector < int > nge(n, -1);
      stack < int > st;
      for (int i = 2 * n - 1; i >= 0; i--) {
       
        while (!st.empty() && st.top() <= nums[i % n]) {
             cout<<st.top()<<endl;
             st.pop();
         
        }

        if (i < n) {
          if (!st.empty()) nge[i] = st.top();
        }
        cout<<"for i = "<<i<<" "<<nums[i%n]<<endl;
        st.push(nums[i % n]);
       
      }
      return nge;
    }
};
int main() {
  Solution obj;
  vector < int > v {5,7,1,2,6,0};
  vector < int > res = obj.nextGreaterElements(v);
//   vector < int > res = obj.solve(v);
  
  cout << "The next greater elements are" << endl;
  for (int i = 0; i < res.size(); i++) {
    cout << res[i] << " ";
  }
}