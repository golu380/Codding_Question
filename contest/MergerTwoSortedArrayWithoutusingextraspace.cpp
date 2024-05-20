#include<bits/stdc++.h>
using namespace std;




int main(){
vector<int> v1{1,3,5,7};
vector<int> v2{0,2,6,8,9};

int n = v1.size();
int m = v2.size();
vector<int> ans(m+n);
for(int i = 0;i<n;i++){
    cout<<v1[i]<<" ";
}

int l = 0;
int r = 0;
int i = 0;

while(l<n && r<m){
if(v1[l] <= v2[l]){
    ans[i] = v1[l];
   
    l++;
    i++;
}else{
    ans[i] = v2[r];
    r++;
    i++;
}


}
while(l<n){
    ans[i++] = v1[l++];
}
while(r<m){
    ans[i++] = v2[r++];
}

for(int i = 0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
//Optimised solution for this question

int li = n-1;
int ri = 0;
while(v1[li] > v2[ri]){
    swap(v1[li],v2[ri]);
    li--;
    ri++;
}
sort(v1.begin(),v1.end());
sort(v2.begin(),v2.end());
cout<<endl;
for(int i = 0;i<n;i++){
    cout<<v1[i]<<" ";

}
cout<<endl;
for(int j = 0;j<m;j++){
    cout<<v2[j]<<" ";

}


    return 0;
}