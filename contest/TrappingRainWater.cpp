#include<bits/stdc++.h>
using namespace std;
int trap(vector<int> & height){
    int water = 0;
       int n = height.size();
       int left[n];
       int right[n];
        left[0] = height[0];
       for(int i = 1;i<n;i++)
       {
           left[i] = max(left[i-1],height[i]);
       }
       for(int i = 0;i<n;i++){
        cout<<left[i]<<" ";
       }
       cout<<endl;
       right[n-1] = height[n-1];
       for(int i = n-2;i>=0;i--){
           right[i] = max(right[i+1],height[i]);
       }
        for(int i= 0;i<n;i++){
            cout<<right[i]<<" ";
        }
       for(int i = 1;i<n-1;i++){
           int var = min(left[i-1],right[i+1]);
           if(var>height[i]){
               water +=  var - height[i];
           }
       }
       return water;

}

int main(){

vector<int> height{0,1,0,2,1,0,1,3,2,1,2,1};
cout<<trap(height);
    return 0;
}