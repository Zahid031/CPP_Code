#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> ii;
// typedef vector<ii> vii;
// typedef set<int> si;
// typedef map<string, int> msi;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"
// #define pi 3.141592653
// const int MAXN = 1e5 + 5;

int main()
{
    fast;
    ll n;
    ll x;
    cin >> n;
    map<ll, ll> mp;
    for (int i = 0; i < n; i++)
    {
        x = i * i;
        x %= n;
        mp[x] = i;
    }
    cout << "0"
         << " ";
    for (int i = 1; i < n; i++)
    {
        if (mp[i] > 0)
            cout << mp[i] << " ";
        else
            cout << "-1"
                 << " ";
    }
    cout << nl;

    return 0;
}