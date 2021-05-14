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

int solve(int &sum)
{
    string s;
    cin>>s;
    if(s=="Icosahedron")
        sum+=20;
    else if(s=="Cube")
        sum+=6;
    else if(s=="Tetrahedron")
        sum+=4;
    else if(s=="Dodecahedron")
        sum+=12;
    else
        sum+=8;
    return sum;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    int sum=0;
    while (T--)
    {
     solve(sum);
    }
    cout<<sum;
    return 0;
}