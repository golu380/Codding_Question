#include<bits/stdc++.h>
using namespace std;
int partition(vector<int> & arr,int low, int high){
    int i = low;
    int j = high;
    int pivot = arr[low];

    while(i<j){
        while(arr[i] <= pivot && i <= high-1){
            i++;
        }
        while(arr[j] > pivot && j >= low+1){
            j--;

        }
        if(i<j){
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[low],arr[j]);
    return j;
}

void quicksort(vector<int> & arr, int low, int high){
    if(low < high){
        int pivot = partition(arr,low,high);
        quicksort(arr,low,pivot-1);
        quicksort(arr,pivot+1,high);
    }
}
int main(){
vector<int> arr{4,6,2,5,7,9,1,3};
int h = arr.size();

int ind = partition(arr,0,h-1);

for(auto i : arr){
    cout<<i<<" ";
}
quicksort(arr, 0, h-1);
cout<<endl;
for(auto i : arr){
    cout<<i<<" ";
}

    return 0;
}