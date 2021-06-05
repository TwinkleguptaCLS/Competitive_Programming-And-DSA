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

void solve()
{
    ll D,d,P,Q;
    cin>>D>>d>>P>>Q;
    ll totaldollar=0;
    totaldollar+=P*d; //initial money
    ll tempd =d;
    int i=2;
    for(int day=d+1;day<=D;)
    {
        while(d--)
        {
            totaldollar+=(P+Q);
            if(day==D)
            {
                cout<<totaldollar<<endl;
                return;
            }
            day++;
        }
        d=tempd;   
        Q= i*Q;
        i++;
    }
    cout<<totaldollar<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T;
    cin >> T;
    while (T--)
    {
     solve();
    }
    return 0;
}