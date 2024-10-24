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
    int t;
    cin >> t;
    while (t--)
    {
        ll a, b, c;
        cin >> a >> b >> c;
        int ans = 0;
        ans = ans + a;
        ans = ans + b / 3;
        b = b % 3;

        ans = ans + (b + c) / 3;
        ll m1 = ((b + c) % 3) / 2 + ((b + c) % 3) % 2;
        if (b > 0 && b + c < 3)
        {
            cout << "-1" << nl;
        }
        else 
        cout << ans + m1 << nl;
    }

    return 0;
}