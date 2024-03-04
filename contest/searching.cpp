#include<bits/stdc++.h>
using namespace std;
bool Search(vector<vector<int>> &matrix, int target){
int low = 0;
if(!matrix.size()){
   return false;
}
int high = (matrix.size() * matrix[0].size()) -1;

while(low <= high){
    int mid = low+ (high-low)/2;
    if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] == target ){
       return true;
    }else if(matrix[mid/matrix[0].size()][mid % matrix[0].size()] < target){
        low = mid + 1;
    }else{
        high = mid-1;
    }
}
return false;
}
int mai(){
vector<vector<int>> matrix{{1,2,3},{4,5,6},{7,8,9}};
int target = 8;

// if(searchingIn2s(matrix,target)){
//     cout<<"target is founded"<<endl;
// }else{
//     cout<<"target is not founded"<<endl;
// }
cout<<"hellow owrldfdjj";


    return 0;
}