#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
string rotateString(string s){
	    string ans = "";
	    int n = s.size();
	    for(int i = 0;i<n-1;i++){
	        ans += s[i+1];
	        
	    }
	    ans = ans+ s[0];
	    
	    return ans;
	    
	}
	bool isPalindrome(string str){
    int l = 0;
    int h = str.length() - 1;
 
    while (h > l)
        if (str[l++] != str[h--])
            return false;
 
    return true;

	
	
	int isRotatedPalindrome(string s)
	{
	    // code here
	    int n = s.size();
	   
	    
	    for(int i = 0;i<n;i++){
	       
	        
	        string s1 = rotateString(s);
	        if(isPalindrome(s1)){
	            return 1;
	        }
	        s = s1;
	        
	        
	       
	        
	    }
	    return 0;
	}
};
int main(){
   int t;
   cin>> t;
   while(t--) {
    string s;
    cin>>s;
    Solution ob;
    cout<<ob.isRotatedPalindrome(s)<<endl;
   }

    return 0;
}