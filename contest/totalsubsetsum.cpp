#include<bits/stdc++.h>
using namespace std;

void solveRecursion(vector<int> &v,int sum,vector<vector<int>> &ans,int ind,vector<int> &temp){

if(v.size() == ind){
 if(sum == 0){
    ans.push_back(temp);
 }
}
if(sum >= v[ind]){
temp.push_back(v[ind]);
solveRecursion(v,sum-v[ind],ans,ind,temp);
temp.pop_back();

}
solveRecursion(v,sum,ans,ind+1,temp)

}

int main(){
vector<int> v{2,3,7,8,10};
int target = 11;
// int arr[] = {2,3,7,8,10};

    return 0;
}