
#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int maxn = 1;
#define mx 40000001
using namespace std;
void solve()
{
    int a, b, c, d, x, y = 0, z, sum = 0, ans = 1, odd = 0, even = 0, res, zero = 0, one = 0;
    map<int, int> mp;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> x >> y;

        mp[y] = x;
    }
    y = 0;
    for (auto i : mp)
    {
         
        //cout << sum << endl;
        if(y<i.second)
          x = i.second - y;
         
        sum += x;        
        y = i.second - i.first;
    }
     cout<<sum<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}