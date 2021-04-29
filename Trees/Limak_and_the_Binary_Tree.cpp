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
    multiset<int>ms;
    int n, number, query;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> number;
        ms.insert(number);
    }
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> query >> number;

        if (query == 1) {
            ms.insert(number);
        } else if (query == 2) {

            cout << ms.count(number) << endl;
        } else if (query == 3) {

            if (ms.find(number) == ms.end())
                cout << -1 << endl;
            else {
                auto itrs = ms.upper_bound(number);
                if (itrs == ms.end())
                    cout << -1 << endl;
                else
                    cout << * itrs << endl;
            }
        } else if (query == 4) {

            if (ms.find(number) == ms.end() ) {
                cout << -1 << endl;
                continue;
            }
            else{

                auto its = ms.equal_range(number);
                auto itr = its.first;
                itr--;
                cout << *itr << endl;
            }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
     solve();
    
    return 0;
}