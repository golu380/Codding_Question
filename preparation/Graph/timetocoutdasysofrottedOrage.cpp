#include<bits/stdc++.h>
using namespace std;
 int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int tno = 0;
        int cnt = 0;
        int days = 0;
        queue<pair<int,int>> q;
        for(int i = 0;i<rows;i++){
            for(int j = 0;j<cols;j++){
                if(grid[i][j] != 0){
                    tno++;
                }
                if(grid[i][j]  == 2){
                    q.push({i,j});
                }
            }
        }
        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};
        while(!q.empty()){
            int k = q.size();
            cnt += k;
            while(k--){
                int row = q.front().first;
                int col = q.front().second;
                q.pop();

                for(int i = 0;i<4;i++){
                    int nrow = row+ dx[i];
                    int ncol = col + dy[i];
                    if(nrow < 0 || ncol <0 || nrow>=rows || ncol >= cols || grid[nrow][ncol] != 1){
                        continue;
                    }
                    grid[nrow][ncol] = 2;
                    q.push({nrow,ncol});
                }
            }
            if(!q.empty()){
                days++;
            }
        }
        if(tno == cnt){
            return days;
        }
        return -1;
    }
int main(){

vector<vector<int>> grid{{2,1,1},{1,1,0},{0,1,1}};
cout<<orangesRotting(grid);
// [2,1,1],[1,1,0],[0,1,1]
    return 0;
}