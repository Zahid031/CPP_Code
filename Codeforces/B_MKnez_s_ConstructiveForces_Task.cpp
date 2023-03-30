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
        int n;
        cin >> n;
        if (n == 3)
            cout << "NO" << nl;
        else if(n%2==0)
        {
            cout << "YES" << nl;
            for (int i = 1; i <=  n; i++)
            {
                if (i % 2 == 1)
                    cout << 1 << " ";
                else
                    cout << -1 << " ";
            }
            cout << nl;
        }

        else
        {
            n = n / 2;
            cout << "YES" << nl;
            for (int i = 1; i <= (2 * n)+1; i++)
            {
                if (i % 2 == 1)
                    cout << -n+1 << " ";
                else
                    cout << n  << " ";
            }
            cout << nl;
        }
    }

    return 0;
}