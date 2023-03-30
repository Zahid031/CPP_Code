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
        ll n;
        cin >> n;
        if (n % 2 == 1)
        {
            for (int i = 0; i < n; i++)
            {
                cout << "3"
                     << " ";
            }
            cout << nl;
        }
        else
        {
            cout << "1 "
                 << "3 ";
            for (int i = 1; i < n - 1; i++)
            {
                cout << "2 ";
            }
            cout << nl;
        }
    }

    return 0;
}