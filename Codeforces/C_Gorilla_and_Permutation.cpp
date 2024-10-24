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
        int n,m,k;
        vi v;
        cin >> n >> m >> k;
        for(int i=n; i>m; i--){
            v.push_back(i);
        }
        // for(int i=m; i<n-m; i++){
        //     v.push_back(i+1);
        //}
        for(int i=1; i<=m; i++){
            v.push_back(i);
        }
        for(int i=0; i<n; i++){
            cout << v[i] << " ";
        }
        cout << nl;
    }
  
    return 0;
}