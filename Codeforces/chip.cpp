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
        int n,a;
        vi v, v1;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            cin >> a;
            if (a == 1)
                v1.push_back(i);
        }
        //cout << v1[v1.size()-1] << nl;
        int ans = v1[v1.size() - 1] - v1[0] ;
        int ans2=ans-v1.size()+1;
        cout << ans2 << endl;
    }

    return 0;
}