#include<bits/stdc++.h>
using namespace std;
int createAtoi(string str) {
    int i = 0;
  int n = str.length();
  int positive = 0;
  int negative = 0;
  int ans = 0;

  while (str[i] == ' ') {
    i++;
  }

  if (str[i] == '+') {
    positive++;
    i++;
  } else if (str[i] == '-') {
    negative++;
    i++;
  }

  while (i < n && str[i] >= '0' && str[i] <= '9') {
    ans = ans * 10 + (str[i] - '0');
    i++;
  }

  if (negative > 0) {
    ans = -1 * ans;
  }

  if (positive > 0 && negative > 0) {
    return 0;
  }

  if (ans > INT_MAX) {
    ans = INT_MAX;
  } else if (ans < INT_MIN) {
    ans = INT_MIN;
  }

  return ans;
   
}
int main(){
string str = "45rohit12";

cout<<createAtoi(str);
    return 0;
}