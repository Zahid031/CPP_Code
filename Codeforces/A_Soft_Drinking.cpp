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
    int n, k, l, c, d, p, n_l, np;
    cin >> n >> k >> l >> c >> d >> p >> n_l >> np;
    int n1 = (k * l) / n_l;
    int n2 = (c * d);
    int n3 = p / np;
    int ans =min(n1,n2);

    cout << min(ans, n3) / n << nl;
    return 0;
}