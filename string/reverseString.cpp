#include<bits/stdc++.h>
using namespace std;
//Neive Algorithms
string reverse_string(string s){
    string str = "";
    string ans = "";
    stack<string> st;
    for(int i = 0; i<s.length();i++){

        if(s[i] == ' '){
          st.push(str);
          str = "";
        }else{
            str += s[i];

        }

    }
    while(!st.empty()){
        ans += st.top()+" ";
        st.pop();
    }

    return ans;
}

string reverse_string_optimal(string s){
    int low = 0;
    int right = s.size()-1;
    string temp = "";
    string ans ="";


    while(low <= right){
     char ch = s[low];
     if(ch != ' '){
        temp += ch;

     }else{
        if(ans != ""){
            ans = temp + " "+ ans;

        }else{
            ans = temp;

        }
        temp = "";
     }
     low++;
    }
    return ans;
}

int main(){

string s ="Amit Kumar dubey I read i chandigarh University";
cout<<reverse_string(s);
cout<<endl;
cout<<reverse_string_optimal(s);
    return 0;
}