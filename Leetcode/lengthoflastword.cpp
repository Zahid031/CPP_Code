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
    string s;
    int i,c=0,flag=0;
    getline(cin,s);
   int l=s.length() ; //<< nl;

    for(i=l-1; i>=0; i--){
        if(s[i]== ' ' && flag!=0)
        {
            break;
        }
        else {
            if(s[i]!=' '){
            c++;
            flag=1;}
        }
    }
    cout << c << nl;
  
    return 0;
}