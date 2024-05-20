#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int> & nums){
    int  n = nums.size();
    int result = nums[0];
    for(int i = 0; i < n;i++){
        int mul = nums[i];
        for(int j = i+1;j<n;j++){
            result = max(result,mul);
            mul *= nums[j];
        }
        result = max(result,mul);

    }
    return result;
}

int main(){
vector<int> nums{1, -2, -3, 0, 7, -8, -2};
cout<<maxProduct(nums)<<endl;

    return 0;
}