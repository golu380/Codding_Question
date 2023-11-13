#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int> v{1,3,4,2,2};
vector<int> v1{3,1,3,4,2};
vector<int> v2{1,1,1};

// approache 1

sort(v1.begin(),v1.end());
for(int i = 0;i<v1.size()-1;i++){
    if(v1[i]==v1[i+1]){
        cout<<v1[i]<<endl;
    }
}

//  seocnd approach

vector<int> count(100);
for(int i=0;i<v1.size();i++){
count[v[i]]++;
}
// Third approach
vector<int> nums{2,5,9,6,9,3,8,9,7,1};
int slow = nums[0];
int fast = nums[0];

do{
    slow = nums[slow];
    fast = nums[nums[fast]];
}while(slow != fast);

cout<<"value of slow "<<slow<<endl;
fast = nums[0];
while(fast != slow){
    slow = nums[slow];
    fast = nums[fast];
    
}
cout<<fast<<endl;
cout<<slow <<endl;
// map<int, int> mp;
// mp[2] = 12, mp[3] =5, mp[4] =6, mp[5] =7;
// map<int, int>::iterator it = mp.begin();
// while (it != mp.end())
// {
//     cout<<it->first<<" "<<it->second<<endl;
//     it++;
// }




    return 0;
}