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
    int n, c = 0;
    cin >> n;
    vii v;
    for (int i = 0; i < n; i++)
    {
        int p, q;
        cin >> p >> q;
        v.push_back({p, q});
    }
    for (int i = 0; i < n; i++)
    {
        int x = v[i].first;
        int y = v[i].second;
        int l = 0, r = 0, u = 0, d = 0;
        for (int j = 0; j < n; j++)
        {
            int x1 = v[j].first;
            int y1 = v[j].second;
            if (x1 > x && y == y1)
                r = 1;
            if (x1 < x && y == y1)
                l = 1;
            if (x1 == x && y < y1)
                u = 1;
            if (x1 == x && y > y1)
                d = 1;
        }
        if (r && l && u && d)
            c++;
    }
    cout << c << nl;

    return 0;
}