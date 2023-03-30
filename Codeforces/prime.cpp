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
bool isprime(int n)
{
    if (n == 1 || n == 0)
        return false;
    else
    {
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0)
                return false;
    }
    return true;
}

int main()
{
    fast;
    if(isprime(2))
    cout << "Yes" << endl;
    return 0;
}