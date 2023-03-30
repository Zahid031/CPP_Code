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
void primefactor(ll n)
{
    while (n % 2 == 0)
    {
        cout << "2" << nl;
        n = n / 2;
    }
    for (int i = 3; i <= sqrt(n); i = i + 2)
    {
        if (n % i == 0)
            cout << i << nl;
        n = n / i;
    }
    if(n>2)
    cout << n << nl;
}

int main()
{
    fast;
    ll a=1000000000;
     primefactor(a);

    return 0;
}