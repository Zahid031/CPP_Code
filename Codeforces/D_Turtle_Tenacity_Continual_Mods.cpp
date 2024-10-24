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
        int n,a;
        vi v;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a;
            v.push_back(a);
        }
        int flag=0;
        for(int i=0; i<n-1; i++){
            if(v[i]%v[i+1]==0)
            {
                flag=1;
            }
             v[i+1]=v[i]%v[i+1];
            cout << v[i+1] << nl;
        }
        if(flag)
        cout << "NO" << nl;
        else cout << "YES" << nl;
    }
  
    return 0;
}