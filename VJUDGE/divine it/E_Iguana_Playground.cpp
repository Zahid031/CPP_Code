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
    int M, N, P, Q;
    cin >> M >> N >> P >> Q;
    if (2 * M * N >= P * Q)
    {
        cout << 2 * M * N - P * Q << nl;
    }
    else
        cout << "IMPOSSIBLE" << nl;

    return 0;
}