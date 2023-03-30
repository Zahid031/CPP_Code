#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MAXN 100000
int MOD = 1e9 + 7;

int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (b > c)
            swap(b, c);
        c = c - b;
        int ans = a + 2 * b;

        ans = ans + min(a + 1, c + d);
        if (a == 0)
        {
            if (b > 0 || c > 0 || d > 0)
            {
                cout << 1 << endl;
            }
            else
                cout << 0 << endl;
        }
        else
            cout << ans << endl;
    }
}