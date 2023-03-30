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
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (a < b && a < c && b < d && c < d)
            cout << "YES" << nl;
        else if (c < a && c < d && a < b && d < b)
            cout << "YES" << nl;
        else if (d < c && d < b && c < a && b < a)
            cout << "YES" << nl;
        else if (b < d && b < a && a < c && c > d)
        {
            cout << "YES" << nl;
        }
        else
            cout << "NO" << nl;
    }

    return 0;
}
