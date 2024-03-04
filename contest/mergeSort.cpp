#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &vect, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(vect[left] <= vect[right]){
            temp.push_back(vect[left]);
            left++;

        }else{
            temp.push_back(vect[right]);
            right++;
        }
    }
    while(left <= mid){
        temp.push_back(vect[left]);
        left++;
    }
    while(right <= high){
        temp.push_back(vect[right]);
        right++;
    }

    for(int i = low; i <= high; i++){

        vect[i] = temp[i-low];
    }
    
}
void merge_sort(vector<int> &arr , int low , int high){
   if(low >= high){
    return;
   }
    int mid = low + (high - low) / 2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);

}
int main(){
vector<int> arr{6,4,5,8,2,9,4,1,34,23};
cout<<"array before sort "<<endl;
for(int i = 0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
merge_sort(arr,0,9);
cout<<endl;
for(int i = 0;i<arr.size();i++){
    cout<<arr[i]<<" ";
}
    return 0;
}