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
        string s;
        int n;
        cin >> n;
        cin >> s;
        int c=0;
        for(int i=0; i<n/2; i++){
            if(s[i]=='1' && s[n-(i+1)]=='0')
            c++;
            else if(s[i]=='0' && s[n-(i+1)]=='1')
            c++;
            else if((s[i]=='0' && s[n-(i+1)]=='0') ||s[i]=='1' && s[n-(i+1)]=='1')
            break;
        }
        cout << n-(c*2) << nl;

    }  
  return 0;
}