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
        vector<string> vs;
        string s;
        int n;
        cin >> n;
        for (int i = 0; i < 2 * n - 2; i++)
        {
            cin >> s;
            if (s.size() == n-1 )
                vs.push_back(s);
        }
        // for(int i=0; i<vs.size(); i++){
        //     cout << vs[i] << nl;
        // }
        reverse(vs[0].begin(), vs[0].end());
        if (vs[0] == vs[1])
            cout << "Yes" << nl;
        else
            cout << "No" << nl;
            vs.clear();
    }

    return 0;
}