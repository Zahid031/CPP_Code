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
//const int MAXN = 1e12 + 5;

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, ar[1000];
        ll mul = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            mul = mul * ar[i];
        }
        ll ans = (mul + (n - 1)) * 2022;
        cout << ans << endl;
    }

    return 0;
}