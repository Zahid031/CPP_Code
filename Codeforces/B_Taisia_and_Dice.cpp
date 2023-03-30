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
    int t,s, n, r;
    cin >> t;
    while (t--)
    {
        cin >> n >> s >> r;
        int val = s - r;
        cout << val << " ";
        int i=1;
        for (i = 2; i <= n; i++)
        {
            while (r - val < (n - i))
            {
                val--;
            }
            cout << val << " ";
            r = r - val;
        }
        cout << nl;
    }
    return 0;
}