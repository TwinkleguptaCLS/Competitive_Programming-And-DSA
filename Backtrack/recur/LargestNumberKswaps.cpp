#include<bits/stdc++.h>
using namespace std;

void findHelper(string str, int k, string &res, int i){
    if(k==0)
        return;
   int n=str.size();
   char max=str[i];
   for(int j=i+1;j<n;j++){
       if(str[j]>max){
           max=str[j];
       }
   }
   if(max!=str[i]){
       k--;
   }
   for(int j=i;j<n;j++){
       if(max==str[j]){
          swap(str[j],str[i]);
          
           if(str.compare(res)>0)
           res=str;
           
           findHelper(str,k,res,i+1);
           swap(str[i],str[j]);
       }
   }
  
}

string findMax(string str, int k)
{
   if(k==0)
   return str;
   string res=str;
   findHelper(str,k,res,0);
   return res;
}


int main(){
  string s;
  cin>>s;
  int k;
  cin>>k;
  cout<<findMax(s, k);
  return 0;

}