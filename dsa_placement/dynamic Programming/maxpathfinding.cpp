#include<bits/stdc++.h>
using namespace std;

int codehleprrec(int i ,int j,int m,vector<vector<int>> & matrix){
    if(j<0 || j>=m){
        return INT_MAX;
    }
   if(i == 0){
    return matrix[0][j];
   }

//    int up = matrix[i][j] + codehleprrec(i-1,j,m,matrix);
//    int leftdiag = matrix[i][j] + codehleprrec(i-1,j-1,m,matrix);
//    int rightdiag = matrix[i][j] + codehleprrec(i-1,j+1,m,matrix);
//    return min(up,min(leftdiag,rightdiag));
return matrix[i][j] + min(codehleprrec(i-1,j,m,matrix),min(codehleprrec(i-1,j-1,m,matrix),codehleprrec(i-1,j+1,m,matrix)));
}

int minimumFallingPathsume(vector<vector<int>> & matrix){
    int n = matrix.size();
    int m = matrix[0].size();
    
    int res = INT_MAX;
    for(int j = 0;j<m;j++){
        int ans = codehleprrec(n-1,j,m,matrix);
        res = min(res,ans);
    }
    return res;
}
int main(){
vector<vector<int>> matrix{{2,1,3},{6,5,4},{7,8,9}};
cout<<minimumFallingPathsume(matrix);

    return 0;
}