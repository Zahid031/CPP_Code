#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<ll> vi;
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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, q, l, r, k;
        cin >> n >> q;
        vi v1(n+10), v2, sum1(n+10);
        sum1[0] = 0;
        ll sum2 = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> v1[i];
            sum1[i] = sum1[i - 1] + v1[i];
        }
        //cout << sum1[1] << nl;
            for (int i = 1; i <= q; i++)
            {
                cin >> l >> r >> k;
                sum2 = sum1[n]-(sum1[r] - sum1[l - 1]) + (r - l + 1) * k;
                if (sum2 % 2 == 1)
                {
                    cout << "YES" << nl;
                }
                else
                    cout << "NO" << nl;
            }
        }

        return 0;
    }
