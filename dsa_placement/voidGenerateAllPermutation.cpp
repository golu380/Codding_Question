#include<bits/stdc++.h>
using namespace std;
void printArr(vector<int> & arr){
    for(int i :arr){
        cout<<i<<" ";
    }
    cout<<endl;
}
int searchCost(vector<int> &ds){
int maximum_value = -1;
int search_cost = 0;
for(int i = 0;i<ds.size();i++){
    if(maximum_value < ds[i]){
        maximum_value = ds[i];
        search_cost = search_cost + 1;
    }
}
return search_cost;
}
void generatePermutation(vector<int> & arr,int n,int m,int index,int &t,int k){
    if(index == n){
        printArr(arr);
        if(searchCost(arr) == k){
            t +=1;
        }
       
        
        return;
    }
    for(int i = 1;i<=m;i++){
        arr[index] = i;
        generatePermutation(arr,n,m,index+1,t,k);
    }
}
int main(){
int n,m,k;
cin>>n>>m>>k;
vector<int> arr(n);
int t = 0;
generatePermutation(arr,n,m,0,t,k);
cout<<t<<endl;

}