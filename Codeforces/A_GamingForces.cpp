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
    int t, n;
    cin >> t;
    while (t--)
    {
        int c = 0;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] == 1)
                c++;
        }
        int ans;
        if (c % 2 == 0)
        {
            ans = c / 2;
        }
        else
            ans = c / 2 + 1;
        int ans2 = abs(n - c);
        cout << ans + ans2 << nl;
    }

    return 0;
}