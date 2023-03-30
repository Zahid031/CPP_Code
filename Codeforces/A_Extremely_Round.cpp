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
// const int MAXN = 1e5 + 5;

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        ll a;
        cin >> a;
        if (a < 10)
            cout << a << endl;
        else if (a >= 10 && a < 100)
            cout << 9 + (a / 10) << endl;
        else if (a >= 100 && a < 1000)
            cout << 18 + (a / 100) << endl;
        else if (a >= 1000 && a < 10000)
            cout << 27 + (a / 1000) << endl;
        else if (a >= 10000 && a < 100000)
            cout << 36 + (a / 10000) << endl;
        else if (a >= 100000 && a < 1000000)
            cout << 45 + (a / 100000) << endl;
    }

    return 0;
}