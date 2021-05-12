#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define max(a, b) (a < b ? b : a)
#define min(a, b) ((a > b) ? b : a)
#define mod 10e9 + 7
#define FOR(i, n) for (int i = 0; i < n; i++)
#define FORL(i, b, n) for (int (i) = (b); (i) <= (n); (i)++)
#define FORR(i, b, n) for (int (i) = (b); (i) >= (n); (i)--)
#define INF 1000000000000000003
typedef vector<int> vi;
typedef pair<int, int> pi;
#define F first
#define S second
#define PB push_back
#define POB pop_back
#define MP make_pair

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int tot=d;
    if(k==1 || l==1 || m==1|| n==1)
    {
        cout<<tot;
        return 0;
    }
    for(int i=1;i<=d;i++)
    {
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0)
        {
            tot--;
        }
    }
    cout<<tot;
    return 0;
}