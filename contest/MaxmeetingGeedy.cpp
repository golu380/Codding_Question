#include<bits/stdc++.h>
using namespace std;
struct meeting{
    int start;
    int end;
    int pos;

};
class Solution{
public:
bool static comparator (struct meeting m1,meeting m2){
    if(m1.end < m2.end){
        return true;
    }
    else if(m1.end > m2.end){
        return false;
    }
    else if(m1.pos < m2.pos){
        return true;
    }
    return false;
}
void study(int s[],int e[],int n){
    struct meeting meet[n];
    for(int i = 0;i<n;i++){
        meet[i].start = s[i],meet[i].end = e[i],meet[i].pos = i+1;

    }
    cout<<"before sorting : "<<endl;
    for(int i = 0;i<n;i++){
        cout<<meet[i].start<<" "<<meet[i].end<<" "<<meet[i].pos<<endl;

    }
    sort(meet,meet+n,comparator);
    cout<<"after sorting : "<<endl;
    for(int i = 0;i<n;i++){
        cout<<meet[i].start<<" "<<meet[i].end<<" "<<meet[i].pos<<endl;
    }
}
};
int main(){
int n = 6;
int start[] = {1,3,0,5,8,5};
int end[] = {2,11,1,7,3,9};
Solution obj;
obj.study(start,end,n);

    return 0;
}