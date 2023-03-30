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
    int n, x;
    cin >> n >> x;
    map<ii, int> mp;

    for (int i = 0; i < x; i++)
    {
        int m, n;
        cin >> m >> n;
        if (m != 3)
            mp[make_pair(m, n)]++;
        if (m == 3)
        {
            if (mp[make_pair(1, n)] > 1)
                cout << "Yes" << nl;
            else if (mp[make_pair(2, n)] > 0)
                cout << "Yes" << nl;
            else
                cout << "No" << nl;
        }
    }

    return 0;
}