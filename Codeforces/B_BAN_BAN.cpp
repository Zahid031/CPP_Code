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
void solve()
{
    int n;
    cin >> n;
    cout << n / 2 + n % 2 << endl;
    int l = 1, r = 3 * n;
    while (l < r)
    {
        cout << l << " " << r << endl;
        l += 3;
        r -= 3;
    }
}

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}