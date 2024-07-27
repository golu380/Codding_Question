#include<bits/stdc++.h>
using namespace std;

class A{
    int x;
    public:
    void setX(int i){
        x = i;
    }
    void print(){
        cout<<x;
    }
};

class B: public A{
    public:
    B(){
        setX(10);
    }
};
class C : public A{
    public:
    C(){
        setX(20);
    }
};

class D: public B, public C{
    
};

int main(){

    A d;
    d.print();
}