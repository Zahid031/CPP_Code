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
    cin >>t;
    while (t--)
    {
        string s;
        bool ans=false;
        cin >> s;
        if(s[0]=='a' || s[1]=='b' || s[2]=='c'){
            ans=true;
        }
        if(ans)
        cout << "YES" << nl;
        else cout <<"NO" << nl;
    }
    
  
    return 0;
}