#include<bits/stdc++.h>
using namespace std;

int solve(int i,int j,int r,int c,vector<vector<int>> & a){
    if(i == r || j==c){
        return 0;
    }
       
        if(a[i][j] == 1){
            
            return 0;
        }
        if(i == r-1 && j == c-1){
            return 1;
        }
        return solve(i+1,j,r,c,a)+solve(i,j+1,r,c,a);
}
 
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int r = obstacleGrid.size();
        int c = obstacleGrid[0].size();
        return solve(0,0,r,c,obstacleGrid);
    }
int main(){
vector<vector<int>> v{{0,0,0},{0,1,0},{0,0,0}};
// cout<<v.size()<<endl;
cout<<"the unique pathe without obstacle is: " <<uniquePathsWithObstacles(v);

    return 0;
}