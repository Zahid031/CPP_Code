#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"
#define pi 3.141592653
const int MAXN = 1e5 + 5;

int main()
{
    fast;
    int n, x;
    int c = 1;
    cin >> n;
    vi v(n);
    map<int, int> mp;
    map<int, int>::iterator it;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        mp[x] = i+1;
    }
    ll m;
    cin >> m;
    vi v1(m);
    ll ans = 0;
    ll ans2 = 0;
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        ans = ans + mp[x] ;

        ans2 = ans2 + n - mp[x]+1;
    }

    cout << ans << " " << ans2 << nl;

    return 0;
}