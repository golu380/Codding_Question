#include<bits/stdc++.h>
using namespace std;

int orangeRottating(vector<vector<int>> & grid){
    int day =0;

    if(grid.empty()){
        return 0;
    }
    int n = grid.size();
    int m = grid[0].size();
    queue<pair<int,int>> qu;
    
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(grid[i][j] == 2){
                qu.push({i,j});
            }
        }
    }
    int dx[] = {0,0,1,-1};
    int dy[] = {1,-1,0,0};

    while(!qu.empty()){
        int k = qu.size();
        while(k--){
            int x = qu.front().first;
            int y = qu.front().second;
            // cout<<x<<" "<<y;
            qu.pop();

            for(int i = 0;i<4;i++){
                int nx = x + dx[i];
                int ny = y + dy[i];
                if(nx < 0 || nx<0 || nx>=m || ny >= n || grid[nx][ny] != 1){
                    continue;
                }
                grid[nx][ny] = 2;
                qu.push({nx,ny});

            }
        }
        if(!qu.empty()){
            day++;
        }
    }
    return day;
}

int main(){
vector<vector<int>> v{{2,1,1} , {1,1,0} , {0,1,1} } ;
cout<<orangeRottating(v);
    return 0;
}