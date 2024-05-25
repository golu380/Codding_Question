#include<bits/stdc++.h>
using namespace std;
int setBit(int num, int i){
    return (num | (1<<i));
}
int clearBit(int num ,int i){
    int mask = ~(1<<i);
    return num & mask;
}
int main(){

cout<<setBit(13,1);
cout<<clearBit(13,2);
cout<<clearBit(13,1);
    return 0;
}