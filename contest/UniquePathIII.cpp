#include<bits/stdc++.h>
using namespace std;

int UniquePath3(vector<vector<int>> & grid,int i,int j,int r,int c){
if(i == -1 || j == -1 || i == r || j == c){
    return 0;
}
if(grid[i][j] == -1){
    return 0;
}
if(grid[i][j] == 2){
    return 1;
}
return  UniquePath3(grid,i+1,j,r,c)+ UniquePath3(grid,i,j+1,r,c) ;
}
pair<int,int> getIndex(vector<vector<int>> & grid){
    for(int i = 0;i<grid.size();i++){
        for(int j = 0;j<grid.size();j++){
            if(grid[i][j]==1){
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int univquePath3(vector<vector<int>> &grid,int i, int j,int r,int c){
    
}
int main(){
vector<vector<int>> grid{{1,0,0,0},{0,0,0,0},{0,0,2,-1}};
pair<int,int> pr;
int r = grid.size();
int c = grid[0].size();
pr = getIndex(grid);
cout<<UniquePath3(grid,pr.first,pr.second,r,c);



    return 0;
}