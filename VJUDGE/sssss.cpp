
#include <bits/stdc++.h>
#define mod 
#define int long long
#define endl '\n'
int maxn = 1;
#define mx 40000001
const int mm=1e9+5;
using namespace std;
void solve()
{
    int a, b, c, d, x, y = 0, z, sum = 0, ans = 1, odd = 0, even = 0, res, zero = 0, one =(-1)*mm;
    map<int, int> mp;
     cin>>a;
     while(a--)
      {
        cin>>x>>y;
        if(x<0 && y<0)
         {
           b=abs(x);
           c=abs(y);
           b=(b*(b+1))/2;
           c=(c*(c+1))/2;
           b=b;
           c=c;
           z=c-b;
           
           //cout<<b<< " "<<c<< " "<<z<<endl;
           one =max(one,z);
           mp[z]++;

         }
         else if(x<0 && y>=0)
         {
            b=abs(x);
            c=y;
           b=(b*(b+1))/2;
           c=(c*(c+1))/2;
           b=(-1)*b;
           c=c;
           z=c+b;
           //cout<<b<< " "<<c<< " "<<z<<endl;
           one =max(one,z);
           mp[z]++;
         }
         else if(x>=0 && y>=0)
         {
            b=x-1;
            c=y;
           b=(b*(b+1))/2;
           c=(c*(c+1))/2;
          
           z=c-b;
           // cout<<b<< " "<<c<< " "<<z<<endl;
           one =max(one,z);
           mp[z]++;
         }
      }
      cout<<mp[one]<<endl;
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