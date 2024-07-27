#include<bits/stdc++.h>
using namespace std;

int cout_distinct_subsequences(string str,int n){

    if (n == 0){
        return 1;
    }
    if(n == 1){
        return 2;
    }

    if( str[n-1] == str[n-1]){
        return 2 * cout_distinct_subsequences(str,n-1);
    }
    else{
        return cout_distinct_subsequences(str,n-1) + cout_distinct_subsequences(str,n-2);
    }
}

int main(){
string str = "aaa";

cout<<cout_distinct_subsequences(str,3);

    return 0;
}