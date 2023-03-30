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
    int t; // map<int, int> mp;
    cin >> t;
    while (t--)
    {
        int n, k, l, r, c1 = 0, c2 = 0;

        cin >> n >> k;
        for (int i = 1; i <= n; i++)
        {
            cin >> l >> r;
            if (l == k)
                c1++;
            if (r == k)
                c2++;
        }

        if (c1 > 0 && c2 > 0)
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}