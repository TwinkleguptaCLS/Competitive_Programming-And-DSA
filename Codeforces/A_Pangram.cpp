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
    int n;
    cin>>n;
    if(n<26)
    {
        cout<<"NO";
        return;
    }
    string str;
    cin>>str;
    vector<bool>arr(26,false);
    for(int i=0;i<n;i++)
    {
        if((str[i]>='a' && str[i]<='z'))
        {
            arr[str[i]-'a']=true;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            arr[str[i]-'A']=true;
        }
        else
        {
            continue;
        }
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==false)
        {
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T=1;
    //cin >> T;
    while (T--)
    {
     solve();
    }
    return 0;
}