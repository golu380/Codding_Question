#include<bits/stdc++.h>
using namespace std;

void selectionSort(vector<int> & arr){
    int n =arr.size();

    for(int i = 0;i<n-1;i++){
        int min_index = i;
        for(int j = i+1;j<n;j++){
            if(arr[j] < arr[min_index]){
                min_index = j;
            }
        }
        swap(arr[i],arr[min_index]);
    }
}

int main(){

vector<int> arr = {3, 8, 1, 9, 4, 6, 2, 7};
selectionSort(arr);
for(int i:arr){
cout<<i<<" ";
}
    return 0;
}