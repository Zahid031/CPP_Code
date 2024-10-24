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
    vi v;
    int a,n;

    cin >> n;
    int n1=n;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    if(v[n-1]!=9)
    v[n-1]++;
    else {
        while(v[n-1]==9){
            v[n-1]=0;
            n--;
            if(n==1)
            break;
        }
        v[n-1]++;
    }
    for(int i=0 ; i<n1; i++){
    cout << v[i] ;
    }
    cout << nl;
  
    return 0;
}