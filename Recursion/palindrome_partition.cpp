#include<bits/stdc++.h>
using namespace std;

vector<vector<string>> palidrome_partition(string s, int ind, vector<vector<string>> &res, vector<string> & ds){
    if(ind == s.size()){
        res.push_back(ds);
        return;
    }

    for(int i = ind ;i<s.size();i++){
        if(isPalindrome(s,ind,i)){
            ds.push_back(s.substr(ind,i-ind+1));
            palidrome_partition(s,i+1,res,ds);
            ds.pop_back();
        }
    }
}

bool isPalindrome(string s, int start, int end){
    while(start <= end){
        if(s[start++] != s[end--]){
            return false;
        }
    }
    return true;
}

int main(){

string str = "aba";
cout<<isPalindrome(str,0,2);

    return 0;
}