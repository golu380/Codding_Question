#include<bits/stdc++.h>
using namespace std;

void findCombination2(int ind,int target,vector<int> & arr, vector<vector<int>> & ans,vector<int> &ds){

    if(target == 0){
        ans.push_back(ds);
        return;
    }
    for(int i = ind;i<arr.size();i++){
       
        if(i > ind && arr[i] == arr[i-1]){
            continue;
        }
        if(arr[i] > target){
            break;
        }
         ds.push_back(arr[i]);
        findCombination2(i+1,target-arr[i],arr,ans,ds);
        ds.pop_back();
    }
}
vector<vector<int>> solution(vector<int> & arr,int target){
    sort(arr.begin(),arr.end());
    vector<vector<int>> ans;
    vector<int> ds;
    findCombination2(0,target,arr,ans,ds);
    return ans;
}
int main(){

vector<int> arr= {10,1,2,7,6,1,5};
int target = 8;
vector<vector<int>> ans = solution(arr,target);
for(int i = 0;i<ans.size();i++){
    for(int j = 0;j<ans[i].size();j++){
        cout<<ans[i][j];
    }
    cout<<endl;
}
    return 0;
}