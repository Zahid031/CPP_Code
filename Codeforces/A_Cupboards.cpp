#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string, int> msi;
typedef map<int, int> mii;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"
#define pi 3.141592653
const int MAXN = 1e5 + 5;

int main()
{
    fast;
    int n;
    mii mp, mpp;
    int a, b, l0 = 0, l1 = 0, r0 = 0, r1 = 0, l, r;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cin >> a >> b;
        // if (a == 0)
        //     l0++;
        // else
        //     l1++;
        // if (b == 0)
        //     r0++;
        // else
        //     r1++;
        mp[a]++;
        mpp[b]++;
    }
    // l = min(l0, l1);
    // r = min(r0, r1);
    // cout << l + r << nl;
    l = min(mp[1], mp[0]);
    r = min(mpp[1], mpp[0]);
    cout << l + r << nl;
    return 0;
}