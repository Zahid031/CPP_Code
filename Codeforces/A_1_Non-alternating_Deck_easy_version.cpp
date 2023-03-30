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
    while (t--)
    {
        int n;
        cin >> n;
        int alice = 1;
        n = n - 1;
        int bob = 0;
        while (n > 0)
        {
            if ((alice + 4) > n)
            {
                bob = bob + alice + 4;
                n = n - alice - 4;
            }
            else
            {
                bob =bob+ n;
                n = n - n;
            }
            if ((bob + 4) > n)
            {
                alice = bob + 4 + alice;
                n = n - bob - 4;
            }
            else
            {
                alice = alice + n;
                n = n - n;
            }
        }
        cout << alice << bob << nl;
    }

    return 0;
}