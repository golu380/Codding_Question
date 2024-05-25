#include<bits/stdc++.h>
using namespace std;

bool getbit(int n, int i){
    cout<<(n&(1<<i))<<endl;
    return ((n & (1<<i)) !=0);
}

int main(){
    int n,pos;
    cin>>n>>pos;

for(int i = 3;i>=0;i--){
bool ans = getbit(n,i);
if(ans){
    cout<<1;
}else{
    cout<<0;
}
}
    return 0;
}

