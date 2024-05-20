#include<bits/stdc++.h>
using namespace std;
int jump2(vector<int>&v,int ind){
    if(ind == 0){
        return 0;
    }
    int jumpOne = jump2(v,ind-1)+abs(v[ind-1]-v[ind]);

    int jumpTwo = INT_MAX;
    if(ind-2 >=0){
        jumpTwo = jump2(v, ind-2)+abs(v[ind-2]-v[ind]);

    }
    return min(jumpOne,jumpTwo);

}

int kjumpfront(vector<int> &v,int ind,int k){
    if(ind == 0){
        return 0;
    }
    int mmsteps = INT_MAX;
    for(int i = 1;i<=k;i++){
        if(ind-i>=0){
             int jump = kjumpfront(v,ind-i,k) + abs(v[ind]-v[ind-i]);
    mmsteps = min(mmsteps,jump);
        }
   
    }
    return mmsteps;
}
int main(){
vector<int> height{30, 10, 60, 10, 60, 50};
int n = height.size();
int k = 2;
cout<<kjumpfront(height,n-1,k);
cout<<jump2(height,n-1);

    return 0;
}