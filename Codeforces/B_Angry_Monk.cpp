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
       // vector<int> v;
        ll max=0;
        int n,k,a;
        cin >> n >> k;
        ll sum=0;
        for(int i=0; i<k; i++){
            cin >> a;
            if(a>max){
            max=a;}
            sum=sum+a+a-1;
        }
        sum=sum-max-max+1;
        cout <<sum << nl;
        
    }
  
    return 0;
}