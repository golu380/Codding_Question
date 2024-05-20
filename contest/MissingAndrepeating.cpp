#include<bits/stdc++.h>
using namespace std;
pair<int,int> missingAndRepeate(vector<int> &arr,int n){
  	vector<int> count(n+1);
    int a,b;
	for(int i =0;i<n;i++){
		count[arr[i]]++;
	}
    for(int i = 1;i<n+1;i++){
		
		if(count[i] == 0){
			a = i;
		}
		if(count[i] == 2){
			b = i;
		}
	}
    cout<<a <<" "<<b<<endl;
	return {a,b};
   
}

pair<int, int> missingAndRepeatingMaths(vector<int> & nums, int n){
    int sqsum = 0;
    int sum = 0;

    for(int i =0;i<n;i++){
        sqsum +=  (nums[i]*nums[i]);
        sum  += nums[i];
    }
    int nsum = (n * (n+1))/2;
    int nsqsum = ( nsum*((2*n)+1))/6;

    int diff = sum - nsum;
    int sumoftows = (sqsum - nsqsum)/ diff;
    int x = (diff+sumoftows)/2;
    int y = (sumoftows - diff)/2;

    cout<<"by maths approach"<<x<<" "<<y<<endl;
    return {x,y};
}
int main(){
vector<int> nums{6,4,3,5,5,1};
pair<int,int> ans = missingAndRepeate(nums,6);
pair<int,int> ans2 = missingAndRepeate(nums,6);


    return 0;
}