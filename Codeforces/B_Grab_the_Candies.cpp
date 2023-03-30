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
        cin >> n;
        vi v1(n), v2, v3;
        for (int i = 0; i < n; i++)
        {
            cin >> v1[i];
            if (v1[i] % 2 == 0)
                v2.push_back(v1[i]);
            else
                v3.push_back(v1[i]);
        }
        int sum1=0,sum2=0;
        for(int i=0; i<v2.size(); i++){
                sum1+=v2[i];
        }
        for(int i=0;i<v3.size(); i++){
            sum2+=v3[i];
        }
        if(sum1>sum2)
        cout << "YES" << nl;
        else cout << "NO" << nl;
    }

    return 0;
}