#include<bits/stdc++.h>
using namespace std;

int Tower(int n,int from ,int to, int aux)
{
    if(n==1)
    {
        cerr<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        return 1;
    }
    int count = Tower(n-1,from,aux,to);
    cerr<<"move disk"<<n<<" from rod "<<from<<" to rod "<<to<<endl;
    count+=Tower(n-1,aux,to,from);

    return count+1;
}

int main()
{
  
  int n;
  cin>>n; //no of disk
  cerr<<Tower(n,1,3,2)<<endl;

  return 0;
}