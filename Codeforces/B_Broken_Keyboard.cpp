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
    int t;
    cin >> t;
    while (t--)
    {
        bool flag=true;
        int n;
        string s;
        cin >> n;
        cin >> s;
        for (int i = 0; i < n-1;)
        {
            string s2 = s.substr(i + 1, i + 2);
            if (s2[0] != s2[1])
            {
                flag=false;
            }
            i = i + 3;
        }
        if(flag)
        cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}