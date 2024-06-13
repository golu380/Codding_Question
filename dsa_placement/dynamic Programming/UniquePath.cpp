#include<bits/stdc++.h>
using namespace std;
int countUniquePath(int row,int col){
    if(row == 0 && col == 0){

        return 1;
    }
    if(row < 0  || col < 0){
        return 0;
    }

    int up = countUniquePath(row,col-1);
    int down = countUniquePath(row-1,col);

    return up+down;
}
int main(){
int x = 5;
int y = 6;

cout<<countUniquePath(5,6);
    return 0;
}