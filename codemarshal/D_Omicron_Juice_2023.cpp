#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int maxn = 1;
#define mx 1e6 + 1;
using namespace std;
vector<int> vec[10000];
int vis[10000];
bool ok = true;
void solve()
{
    int a = 1, b, c, d, k, x = -1, y = 0, z, sum = 0, ans = 0, odd = 0, even = 0, res = 1e6 + 1, zero = INT_MAX, one = 0;
    cin >> a >> b >> c >> k;
    sum = a + b + c;
    if (sum % 3)
    {
        cout << "Fight" << endl;
    }
    else
    {
        one = sum / 3;
        x = abs(one - a);
        y = abs(one - b);
        z = abs(one - c);
        // cout<<x<<y<<z<<endl;
        if (x % k || y % k || z % k)
        {
            cout << "Fight" << endl;
        }
        else
        {
            cout << "Peaceful" << endl;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t, cs = 1;
    t = 1;
    cin >> t;
    while (t--)
    {
        cout << "Case " << cs << ": ";
        solve();
        cs++;
    }
    return 0;
}
