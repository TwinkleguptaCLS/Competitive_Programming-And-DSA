/* link : https://www.geeksforgeeks.org/check-if-two-people-starting-from-different-points-ever-meet/ */
#include<bits/stdc++.h>
using namespace std;
bool ifevermeet(int x1,int x2,int v1,int v2)
{
    if(x1>x2 && v1>v2 || x2>x1 &&v2>v1) 
        return false;
    if(x1<x2)
    {
        swap(x1,x2);
        swap(v1,v2);
    }
    while(x1>=x2)
    {
        if(x1==x2)
            return true;
        x1+=v1;
        x2+=v2;
    }
    return false;
}

int main()
{
    int x1,x2,v1,v2;
    cin>>x1>>x2>>v1>>v2;
    if(ifevermeet(x1,x2,v1,v2))
    {
        cout<<"MEET";
    }
    else
    {
        cout<<"THEY CAN'T MEET";
    }
    
    return 0;

}