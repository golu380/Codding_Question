#include<bits/stdc++.h>
using namespace std;
void solve(string s, string f, int ind){
    if(ind == s.length()){
        cout<<f<<" ";
        return;
    }
    f = f + s[ind];
    solve(s,f,ind+1);
    f.pop_back();
    solve(s,f,ind+1);
}

int main(){

string str = "abc";

solve(str,"",0);

    return 0;
}