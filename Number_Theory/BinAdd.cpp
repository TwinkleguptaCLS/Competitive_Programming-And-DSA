#include<bits/stdc++.h>
using namespace std;

string addBinary(string a, string b) {
  if(a.size() > b.size()) while(a.size() > b.size()) b = "0" + b;
  else if(b.size() > a.size()) while(b.size() > a.size()) a = "0" + a;

  int i = a.size()-1;
  string sum = "";
  int carry = 0;
  
  while(i >= 0) {
      if(carry == 1) {
          if(a[i] == '0' && b[i] == '0') {
              sum = "1" + sum;
              carry = 0;
          }
          else if((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')) {
              sum = "0" + sum;
          }
          else { /* we're adding three 1s here */
              sum = "1" + sum;
          }
      }
      else {
          if(a[i] == '0' && b[i] == '0') {
              sum = "0" + sum;
          }
          else if((a[i] == '0' && b[i] == '1') || (a[i] == '1' && b[i] == '0')) {
              sum = "1" + sum;
          }
          else { /* we're adding two 1s here */
              sum = "0" + sum;
              carry = 1;
          }
      }
      
      i--;
  }
  
  if(carry == 1) sum = "1" + sum;
  
  return sum;
}

int main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt","r",stdin);
      freopen("output.txt","w",stdout);
  #endif
  string a,b;
  cin>>a>>b;
  cout<<addBinary(a,b);
  return 0;
}