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
        int n, k;
        cin >> n >> k;
        bool flag=false;
        for (int i = 0; i <= n; i++)
        {
            int x = i, y = n - i;
            int a = x * (x - 1) / 2, b = y * (y - 1) / 2;
            if (a + b == k)
            {
                cout << "YES\n";
                for (int i = 0; i < x; i++)
                {
                    cout << "-1 ";
                }
                for (int i = 0; i < y; i++)
                {
                    cout << "1 ";
                }
                cout << endl;
                flag=true;
                break;
            }
        }
        if(!flag)
        cout << "NO\n";
    }
}
