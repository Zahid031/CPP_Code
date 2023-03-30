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
    ll n;
    cin >> n;
    bool flag=false;
    ll ans=0;
    vector<ll> v;
    ll mod1 = 0;
    ll mod2 = 0;
    cout << "0 ";
    for (int i = 1; i < n; i++)
    {
        mod1 = i % n;
        for (int j = 1; j < n; j++)
        {
            mod2 = (j * j) % n;
            if(mod1==mod2){
                ans=j;
                //flag=true;
           // cout << j << " ";
            break;
            
            }
        }
        cout << ans << " ";
        ans=0;
    }
    cout <<  nl;

    return 0;
}