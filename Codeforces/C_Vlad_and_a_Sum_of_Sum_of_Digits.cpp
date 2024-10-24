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
const int N=200001;
int sum[N] = {};
void sumOfDigits()
{

    for (int i = 1; i <= 200001; ++i)
    {
        int rem = 0;
        int a = i;
        while (a)
        {
            rem += a % 10;
            a /= 10;
        }
        sum[i] = sum[i - 1] + rem;
    }
}

int main()
{
    fast;
    sumOfDigits();
    int t;
    cin >> t;
    while (t--)
    {
        ll n, ts = 0;
        cin >> n;
        cout << sum[n] << nl;
    }

    return 0;
}