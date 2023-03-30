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
    int n;
    cin >> n;
    if (n %2== 1)
    {
        cout << -1 << nl;
    }
    else
    {
        for (int i = 1; i <= n / 2; i++)
        {
            cout << 2 * i << " " << 2 * i - 1 << " ";
        }
        cout << endl;
    }

    return 0;
}