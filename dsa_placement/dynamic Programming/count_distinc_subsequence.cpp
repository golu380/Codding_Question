#include<bits/stdc++.h>
using namespace std;

int count(string str){
int n = str.length();
vector<int> dp(n+1,0);

vector<int> last(26,-1);
dp[0] = 1;
for(int i = 1;i<=n;i++){
dp[i] = 2* dp[i-1];

if(last[str[i-1]-97] != -1){
    dp[i] = dp[i] - dp[last[str[i-1]-97]];
}

last[str[i-1]-97] = i-1;
}
return dp[n];

}

int main(){

string s = "ggg";
cout<<count(s);
    return 0;
}