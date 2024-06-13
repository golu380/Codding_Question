#include<bits/stdc++.h>
using namespace std;
int untillKJOB(vector<int> en,int ind,int k){
if(ind == 0){
    return 0;
}
int minEn = INT_MIN;

for(int i = 1;i<= k;i++){

    if(ind-i>= 0){
        int jumen = untillKJOB(en,ind-i,k) + abs(en[ind]-en[ind-k]);
        minEn = min(minEn,jumen);
    }
}

return minEn;
}
int main(){
vector<int> en{30,10,60,10,60,50};
cout<<untillKJOB(en,0,2)

    return 0;
}