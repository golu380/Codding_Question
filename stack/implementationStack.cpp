#include<bits/stdc++.h>
using namespace std;

class Stack{

queue<int> q1,q2;
public:
void push(int x){

    q2.push(x);

    while(!q1.empty()){
        q2.push(q1.front());
        q1.pop();

    }
    queue<int> q = q1;
    q1 = q2;
    q2 = q;
    
}
int top(){
    if(q1.size() == 0){
        cout<<"Stack undrflow";
        return -1;
    }
    return q1.front();
}
void pop(){
    if(q1.empty() ){
        cout<<"Stack is empty !";
        return;
    }
    return q1.pop();

}



};


int main(){

Stack s1;
s1.push(1);
s1.push(2);
s1.push(3);
s1.push(4);

cout<<s1.top();
s1.pop();
cout<<s1.top();
s1.pop();
cout<<s1.top();
s1.pop();
cout<<s1.top();

s1.pop();

    return 0;
}