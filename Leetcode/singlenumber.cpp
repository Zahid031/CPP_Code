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
    vi nums{1,2,2,4,5,5};
      map<int,int>mp;
        for(int i=0; i<nums.size(); i++){
            mp[nums[i]]++;
        }
        // map<int,int> :: iterator it;
        // for(it=mp.begin(); it!=mp.end(); it++)
        for(auto &it:mp)
       {
            if(it.second!=2)
            cout<< it.first << nl;
        }
  
    return 0;
}