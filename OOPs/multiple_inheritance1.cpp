#include<bits/stdc++.h>
using namespace std;

class A{
    public:
    A(){
        cout<<" A 's  constructor is called "<<endl;
    }
};

class B{
    public:
    B(){
        cout<<" B 's  constructor is called "<<endl;
    }
};
class C : public A, public B{
    public:
    C(){
        cout<<" C 's  constructor is called "<<endl;
    }
};
int main(){
    C c;
    return 0;
}