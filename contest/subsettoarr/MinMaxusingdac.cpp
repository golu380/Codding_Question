#include<bits/stdc++.h>
using namespace std;

class MinMax{
    public:
    int minValue;
    int maxValue;
};

MinMax findMinMax(vector<int> & arr,int l,int r){
    MinMax  result;
    if(l == r){
        result.minValue = arr[l];
        result.maxValue = arr[r];
        return result;
    }
    if(l +1 == r){
        result.minValue = min(arr[l],arr[r]);
        result.maxValue = max(arr[l],arr[r]);
        return result;
    }
    int mid = (l+r) /2;
    MinMax leftresult = findMinMax(arr,l,mid);
    MinMax rightresult = findMinMax(arr,mid+1,r);

    result.minValue = min(leftresult.minValue,rightresult.minValue);
    result.maxValue = max(leftresult.maxValue,rightresult.maxValue);
    return result;
}

int main(){

vector<int> arr  = {3, 8, 1, 9, 4, 6, 2, 7};
MinMax result = findMinMax(arr,0,7);
cout<<result.maxValue<<" "<<result.minValue<<endl;
    return 0;
}