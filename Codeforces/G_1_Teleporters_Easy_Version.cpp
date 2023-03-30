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
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, c;
        cin >> n >> c;
        vi v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            v[i] = i + 1 + v[i];
        }
        sort(v.begin(), v.end());
        // for(int i=0; i<n; i++){
        //     cout << v[i] << nl;

        int ct = 0;
        for (int i = 0; i < n; i++)
        {
            if ((c - v[i]) >= 0)
            {
                ct++;
                c = c - v[i];
            }
            else
                break;
        }
        cout << ct << nl;
    }

    return 0;
}