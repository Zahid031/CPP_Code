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
    ll x , y;
    cin >> x >> y;
    ll k = 0;
    ll start = 0,end=2e9,mid;
    while(start <= end)
    {
        mid = (start + end) / 2;
        ll val = (mid * (mid + 1)) / 2;
        if(val <= y)
        {
            k = mid + 1;
            start = mid + 1;
        }
        else 
        {
            end = mid - 1;
        }
    }
    cout << min(x , k) << endl;
    

    return 0;
}