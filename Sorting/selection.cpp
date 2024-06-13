#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[],int n){

    for(int i = 0;i<n-1;i++){
        int mini = i;
        for(int j = i+1;j<n;j++){
            if(arr[j]<arr[mini]){
                mini = j;
            }
        }

        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

    cout<<"afer sorting"<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void insertion_sort(int arr[],int n){
    for(int i = 0;i<n;i++){
        int j = i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
        }
    }
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void bubble_sort(int arr[],int n){
    for(int i = n-1;i>=0;i--){
        for(int j = 0;j<=i-1;j++){
            if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            }
           
        }
    }

    for(int i  = 0;i<n;i++){

        cout<<arr[i]<< " ";
    }
    cout<<endl;
}
int main(){
int arr[] = {13,46,24,52,20,9};
int arr2[] = {13,46,24,52,20,9};
int arr3[] = {13,46,24,52,20,9};
  int n = sizeof(arr) / sizeof(arr[0]);
   cout << "Before selection sort: " << "\n";
   for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  selection_sort(arr, n);
  bubble_sort(arr2,n);

  insertion_sort(arr2,n);

    return 0;
}