#include<bits/stdc++.h>
using namespace std;

int countMinCostPath(int x,int y,vector<vector<int>> &grid){
    if(x == 0 && y == 0)
    {
        return grid[0][0];
    }
    if(x < 0 || y < 0){
        return INT_MAX;

    }
   
    return grid[x][y] + min(countMinCostPath(x-1,y,grid),countMinCostPath(x,y-1,grid));
}
int countMinCostPathdp(int x,int y,vector<vector<int>> &grid,vector<vector<int>> &dp){
    if(x == 0 && y == 0)
    {
        return grid[0][0];
    }
    if(x < 0 || y < 0){
        return INT_MAX;

    }
    if(dp[x][y] != -1)
    {
        return dp[x][y];
    }
   
    return dp[x][y] = grid[x][y] + min(countMinCostPathdp(x-1,y,grid,dp),countMinCostPathdp(x,y-1,grid,dp));
}

int main()

{
vector<vector<int>> grid{{1,3,1},{1,5,1},{4,2,1}};
int y = grid.size();
int x = grid[0].size();
vector<vector<int>> dp(y,vector<int>(x,-1));
cout<<countMinCostPathdp(x-1,y-1,grid,dp)<<endl;
cout<<countMinCostPath(x-1,y-1,grid);


    return 0;
}