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
        int up = 0, sd = 0;
        bool flag = false;
        string s;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == 'U')
                up++;
            if (s[i] == 'D')
                up--;
            if (s[i] == 'R')
                sd++;
            if (s[i] == 'L')
                sd--;
            if (up == 1 && sd == 1)
            {
                flag = true;
            }
        }
        if (!flag)
        {
            cout << "NO" << nl;
        }
        else cout << "YES" << nl;
    }

    return 0;
}