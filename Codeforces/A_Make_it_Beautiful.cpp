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
        int sum = 0, c = 0;
        int n, a;
        cin >> n;
        vi v;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());

        // for (int i = 0; i < n - 1; i++)
        // {
        //     sum = sum + v[i];
        //     if (sum == v[i + 1])
        //     {
        //         c++;
        //         // swap(v[i], v[i + 1]);
        //     }
        // }
        if (v[0] == v[n - 1])
        {
            cout << "NO" << endl;
        }

       
        else
        {
            cout << "YES" << nl;
            cout << v[0] << " " << v[n-1] << " ";
            for (int i = 1; i < n - 1; i++)
            {
                cout << v[i] << " ";
            }
            cout << nl;
        }
    }

    return 0;
}