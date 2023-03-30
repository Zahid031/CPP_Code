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
    bool flag = false;
    char c[] = {'H', 'Q', '9'};
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (s[i] == c[j])
                flag = true;
        }
    }
    if (flag)
        cout << "YES" << nl;
    else
        cout << "NO" << nl;

    return 0;
}