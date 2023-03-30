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
bool isprime(ll n)
{
    bool is_prime = true;

    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        is_prime = false;
    }

    for (ll i = 2; i*i <= n; ++i)
    {
        if (n % i == 0)
        {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

int main()
{
    fast;
    ll n, a;
    cin >> n;
    while (n--)
    {
        cin >> a;
        ll x = sqrt(a);
        if (x * x != a)
            cout << "NO" << nl;
        else if (isprime(x))
            cout << "YES" << nl;
        else
            cout << "NO" << nl;
    }

    return 0;
}