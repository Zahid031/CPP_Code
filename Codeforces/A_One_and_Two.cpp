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
    int t, n, a;
    cin >> t;

    while (t--)
    {
        map<ll, ll> mp,mp1;
        int mul = 1;
        ll mul1 = 1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            mul1 = mul1 * a;
            mp[mul1]++;
            if (mp[mul1] == 1)
            {
                mp1[mul1] = i+1;
            }
        }
        ll sq = sqrt(mul1);
        if (sq * sq != mul1)
            cout << "-1" << nl;
        else if (mp1[sq] > 0)
            cout << mp1[sq] << nl;
        else
            cout << "-1" << nl;

        mp.clear();
        mp1.clear();
    }

    return 0;
}