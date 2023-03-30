#include <bits/stdc++.h> 
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
typedef vector<pi> vii;
typedef set<int> si;
typedef map<string, int> msi;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"
#define Pi 3.141592653
const int MAXN = 1e5 + 5;

int main()
{
    fast;
    int n;
    int ans=1;
    map<pi,int> mp;
    map<pi,int>::iterator it;
    cin >> n;
    while(n--){
        int h,m;
        cin >> h >> m;
        mp[{h,m}]++;
        ans=max(ans,mp[{h,m}]);

    }
    cout << ans << nl;
    // for(it=mp.begin(); it!=mp.end(); it++)
    // {
    //     cout << (it->first).first << " " << (it->first).second << " " << it->second<< nl;
    // }
  
  return 0;
}