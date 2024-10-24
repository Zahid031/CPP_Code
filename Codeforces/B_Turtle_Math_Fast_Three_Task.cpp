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
        int a,n,sum=0;
        vi v;
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> a;
            sum=sum+a;
            v.push_back(a);
        }
        int flag=0;
        if(sum%3==0)
        cout << 0 << nl;
        else {
            for(int i=0; i<n; i++){
                if((sum-v[i])%3==0){
                    flag=1;
                }
            }
            if(flag || (sum+1)%3==0)
            cout << 1 << nl;
            else cout << 2 << nl;
        }
    }
  
    return 0;
}