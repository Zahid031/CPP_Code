#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<int, int> mii;
typedef map<string, int> msi;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"
#define pi 3.141592653
const int MAXN = 1e5 + 5;

int main()
{
    fast;
    int t;
    vi v1, v2, v3;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int h, m;
        cin >> h >> m;
        v1.push_back(h);
        v2.push_back(m);
    }
    int c = 1;
    for (int i = 0; i < t - 1; i++)
    {
        if (v1[i] == v1[i + 1])
        {
            if (v2[i] == v2[i + 1])
                c++;
        }
        if ((v2[i] != v2[i + 1]) || (v1[i] != v1[i + 1]) || (i+2==t))
        {
            v3.push_back(c);
            c = 1;
        }
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    if ((v1[0] == v1[t - 1]) && (v2[0] == v2[t - 1]))
        cout << t << nl;
    else
    {
        sort(v3.begin(), v3.end(), greater<int>());
        cout << v3[0] << nl;
    }

    return 0;
}