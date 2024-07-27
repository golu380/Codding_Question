#include<bits/stdc++.h>
using namespace std;

void showpq(priority_queue<int,vector<int>,greater<int>> g){
    while(!g.empty()){
        cout<<g.top()<<" ";
        g.pop();
    }
    cout<<endl;
}
void showArray(int *arr,int n){
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
int arr[6] = {10,2,4,8,6,9};
priority_queue<int,vector<int>,greater<int>> gquiz(arr,arr+6);
cout<<"Array :";    
showArray(arr,6);
cout<<"Priority Queue :";
showpq(gquiz);

    return 0;
}