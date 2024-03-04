#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
void bfs(vector<vector<char>> &grid, int row, int col,vector<vector<int>> & vis){
      vis[row][col] = 1;
      queue<pair<int,int>> qu;
      qu.push({row,col});
      int n = grid.size();
      int m = grid[0].size();
   
      
      while(!qu.empty()){
          int row = qu.front().first;
          int col = qu.front().second;
          
          qu.pop();
          
          for(int i = -1;i<= 1;i++){
              for(int j = -1;j<= 1;j++){
                  int nrow = row + i;
                  int ncol = col +j;
                  
                  if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && !vis[nrow][ncol] && grid[nrow][col]=='1'){
                      vis[nrow][ncol] = 1;
                      qu.push({nrow,ncol});
                      
                  }
              }
          }
      }
    
  }

int numIslands(vector<vector<char>>& grid) {
        // Code here
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m,0));
        int cnt = 0;
        for(int i = 0;i<n;i++){
            for(int j = 0 ;j<m;j++){
                if(!vis[i][j] && grid[i][j] == '1'){
                    cnt++;
                    bfs(grid,i,j,vis);
                }
            }
        }
        return cnt;
    }
};
int main(){
int tc;
cin>> tc;
while(tc--){
    int n,m;
    cin>>n>>m;
    vector<vector<char>> grid(n,vector<char>(m,'#'));
    for(int i = 0;i<n;i++){
        for(int  j = 0;j<m;j++){
            cin>>grid[i][j];
        }
    }
    Solution obj;
    int ans = obj.numIslands(grid);
    cout<<ans<<endl;
}
    return 0;
}

 