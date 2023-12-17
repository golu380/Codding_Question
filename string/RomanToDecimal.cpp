#include<bits/stdc++.h>
using namespace std;
int value(char a){
    if(a == 'I'){
        return 1;
    }
    if(a == 'V'){
        return 5;
    }
    if(a == 'X'){
        return 10;
    }
    if(a == 'L'){
        return 50;
    }
    if(a == 'C'){
        return 100;
    }
    if(a == 'D'){
        return 500;
    }
    if(a == 'M'){
        return 1000;
    }
    return -1;
}

int romanToInt(string s) {
    // Write your code here
    int res = 0;

    for(int i = 0;i<s.size();i++){
        int s1 = value(s[i]);
        if(i+1 < s.size()){
            int s2 = value(s[i+1]);
            if(s1>= s2){
                res = res+s1;
            }else{
                res = res+ s2 - s1;
                i++;
            }
        }else{
            res = res+s1;
        }
    }
    return res;
}
int main(){
string str = "XIII";
cout<<romanToInt(str);
    return 0;
}