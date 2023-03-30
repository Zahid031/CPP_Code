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
    int n;
    cin >> n;
    vi v(n*n);
    ll sum1 = 0, sum2 = 0;
    for (int i = 0; i < n * n; i++)
    {
        cin >> v[i];
        if (i % (n + 1) == 0)
            sum1 = sum1 + v[i];
        if (i > 0 && i < n * n - 1)
        {
            if (i % (n - 1) == 0)
                sum2 = sum2 + v[i];
        }
    }

    ll ans = abs(sum1 - sum2);
    cout << ans << nl;

    return 0;
}