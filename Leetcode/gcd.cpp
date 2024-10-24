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
int gcd(int a, int b)
{
    int mn = min(a, b);

    int mx = max(a, b);
    if (mx % mn == 0)
    {
        return mn;
    }

    else
    {
        int remainder = 1;
        while (remainder != 0)
        {
            remainder = mx % mn;
            if (remainder == 0)
                break;
            else
            {
                mx = mn;
                mn = remainder;
            }
        }
        return mn;
    }
}

int main()
{
    fast;
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b) << nl;

    return 0;
}