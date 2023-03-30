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
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i] == 1)
                v[i] = v[i] + 1;
        }
        for (int i = 0; i < n - 1; i++)
        {
            if (v[i + 1] % v[i] == 0)
                v[i + 1]++;
        }
        for (int i = 0; i < n; i++)
        {
            cout << v[i] << " ";
        }
        cout << nl;
    }

    return 0;
}