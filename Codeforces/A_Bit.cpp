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
    int n, sum = 0;
    cin >> n;
    int t = n;
    while (n--)
    {

        string s, s1 = "++X", s2 = "X++";
        cin >> s;
        {
            if ((s == s1) || (s == s2))
            {
                sum += 1;
            }
            else
            {
                sum -= 1;
            }
        }
    }
    cout << sum << nl;

    return 0;
}