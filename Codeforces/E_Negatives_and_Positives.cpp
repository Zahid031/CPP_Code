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
        vi v(n);
        int c = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            if (v[i] < 1)
                c++;
        }
        int t = c;
        sort(v.begin(), v.end()); //, less<int>());
        ll sum = 0;

        {
            if (c % 2 == 0)
            {
                for (int i = 0; i < c; i += 2)
                {
                    v[i] = abs(v[i]);
                    v[i + 1] = abs(v[i + 1]);
                }
            }

            if (c % 2 == 1)
            {
                for (int i = 0; i < c - 1; i += 2)
                {
                    v[i] = abs(v[i]);
                    v[i + 1] = abs(v[i + 1]);
                }
                // if (c<n && abs(v[c - 1]) > v[c])
                // {
                //     v[t - 1] = abs(v[t - 1]);
                //     v[c] == (v[c]);
                // }
                if (c < n)
                {
                    v[t - 1] = -1 * v[t - 1];
                    // v[t]=-1*v[t];
                    if (v[t - 1] < v[t])
                    {
                        v[t - 1] = -1 * v[t - 1];
                    }
                    else v[t] = -1 * v[t];
                }
            }
        }
        for (auto i : v)
        {
            sum = sum + i;
            // cout << i << nl;
        }
        cout << sum << nl;
    }

    return 0;
}