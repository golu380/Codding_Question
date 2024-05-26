#include<bits/stdc++.h>
using namespace std;

bool checkOprand(char c){
        return ((c>='a' && c<='z') || (c>='A' && c <='Z') || (c>='0' && c<='9'));
}
string postToInfix(string pre_exp) {
        // Write your code here
        stack<string> st;
        
        for(int i = 0;i<pre_exp.size();i++){
            
            if(checkOprand(pre_exp[i])){
                string op(1,pre_exp[i]);
                st.push(op);
            }else{
                string op1 = st.top();
                st.pop();
                string op2 = st.top();
                st.pop();
                
                st.push("("+op2 +pre_exp[i]+op1+")");
            }
        }
        return st.top();
}

int main(){

string str = "ab*c+";
cout<<postToInfix(str);
    return 0;
}