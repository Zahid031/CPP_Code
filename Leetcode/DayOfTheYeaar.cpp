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
bool isLeapYear(int year) {
    if (year % 4 != 0) {
        return false;
    }
    if (year % 100 == 0 && year % 400 != 0) {
        return false;
    }
    return true;
}

int main()
{
    fast;
    string s="2019-01-09";
    int y=stoi(s.substr(0,4));
    int m=stoi(s.substr(5,2));
    int d=stoi(s.substr(8,2));
    int ans;
    if(y){
        if(m<2)
        ans=d;

        else if(m>2)
        ans=(m-1)*30+d+(m-1)/2-1;
        else ans=ans=(m-1)*30+d+(m-1)/2-2;
    }
    cout << ans <<nl;
  
    return 0;
}