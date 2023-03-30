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
    while(t--){
        int n;
        cin >> n;
        vi v(n);
        for(auto &i:v){
            cin >> i;
        }
        sort(v.begin()+1,v.end());
        if(v[0]>v[1])
        cout << "Alice" << nl;
        else cout <<"Bob" << nl;
    }
  
    return 0;
}