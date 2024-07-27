#include<bits/stdc++.h>
using namespace std;
class Demo{
    int a,b;
    public:
    Demo(){

        cout<<"Default constructor"<<endl;
    }
    Demo(int x, int y):a(x),b(y){
        cout<<"parameterized constructor values "<<a<<" "<<b<<endl;
    }
}instance1(2,4),instance;
int main(){


    return 0;
}