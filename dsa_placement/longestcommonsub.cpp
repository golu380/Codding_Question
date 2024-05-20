#include<bits/stdc++.h>
using namespace std;

int lcs(string s1,string s2,int ind1,int ind2){
    if(ind1<0 || ind2<0){
        return 0;
    }
    if(s1[ind1] == s2[ind2]){
        return 1+lcs(s1,s2,ind1-1,ind2-1);
    }
    return max(lcs(s1,s2,ind1-1,ind2),lcs(s1,s2,ind1,ind2-1));
}

int main(){
string s1,s2;
s1 = "abc";
s2 = "def";
cout<<lcs(s1,s2,2,2);


    return 0;
}