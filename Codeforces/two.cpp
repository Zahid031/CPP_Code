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
        int n;
        int flag = -1;
        int c = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == 2)
                c++;
        }
        int cnt = 0;
        if (c % 2 != 0)
            cout << "-1" << nl;

        else
        {
            for (int i = 0; i < n; i++)
            {
                if (arr[i] == 2)
                    cnt++;
                if (cnt == c / 2)
                {
                   // cout << i + 1 << nl;
                    flag = i + 1;
                    break;
                }
            }
            cout << flag << nl;
        }
    }

    return 0;
}