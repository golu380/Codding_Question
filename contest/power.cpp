#include<bits/stdc++.h>
using namespace std;

double mypow(double x, int n){
    long long nn = n;
    double ans = 1.0;
    if(nn < 0){
        nn = -1 *nn;
    }

    while(nn){
        if(nn % 2 == 1){
            ans *= x;
            nn = nn -1;
        }else{
            x = x*x;
            nn = nn/2;
        }
    }
    if(n < 0){
        ans = double(1.0)/double(ans);
    }

    return ans;
}

int main(){
cout<<mypow(2,10);
    return 0;
}