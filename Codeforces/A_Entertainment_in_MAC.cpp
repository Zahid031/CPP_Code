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
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        string s;
        cin >> s;
        string s1=s;
        reverse(s.begin(),s.end());
        if(s1>s){
            if(n%2==0)
            cout << s+s1 << nl;
            else cout << s << nl;
        }
        else {
            if(n%2==0)
            cout << s1 << nl;
            else cout << s+s1 << nl;
        }
        
    }
  
    return 0;
}