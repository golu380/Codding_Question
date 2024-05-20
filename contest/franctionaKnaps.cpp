#include<bits/stdc++.h>
using namespace std;
struct Item{
    int value;
    int weight;
};
class Solution
{
    public:
    //Function to get the maximum total value in the knapsack.
    bool static comparator(Item i1,Item i2){
        double r1 = double(i1.value)/double(i1.weight);
        double r2 = double(i2.value)/double(i2.weight);
        return (r1>r2);
        
    }
    double fractionalKnapsack(int W, Item arr[], int n)
    {
        // Your code here
        cout<<"before sorting :"<<endl;
        for(int i = 0;i<n;i++){
            cout<<arr[i].value<<" "<<arr[i].weight<<endl;
        }
        sort(arr,arr+n,comparator);
        cout<<"after sorting :"<<endl;
        for(int i = 0;i<n;i++){
            cout<<arr[i].value<<" "<<arr[i].weight<<endl;
        }
        double finalvalue = 0;
       
        int currentweight = 0;
        for(int i = 0;i<n;i++){
            if(currentweight+arr[i].weight <W){
                finalvalue += arr[i].value;
                currentweight += arr[i].weight;
                cout<<finalvalue <<" "<<currentweight<<endl;
                
            }else{
                int remains = W - currentweight;
                finalvalue = finalvalue + double(arr[i].value/arr[i].weight  * remains);
                break;
            }
        }
        return finalvalue;
    }
        
};
int main(){
int t;
cin>>t;
cout<<setprecision(2)<<fixed;
while(t--){
    int n,w;
    cin>>n>>w;
    Item arr[n];
    for(int i = 0;i<n;i++){
        cin>>arr[i].value>>arr[i].weight;
    }
    Solution ob;
    cout<<ob.fractionalKnapsack(w,arr,n)<<endl;
}
    return 0;
}