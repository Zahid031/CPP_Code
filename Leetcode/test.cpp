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
    vi v ={1,2,3,4,5,1,2,2,3,8};
    map<int,int> mp;
    for(int i=0; i<v.size(); i++){
        mp[v[i]]++;
    }
     int maxOccurrence = 0;
        int maxNumber = 0;
        for (auto it : mp) {
            if (it.second > maxOccurrence){
                maxOccurrence = it.second;
            maxNumber = it.first;}
        }
    cout << maxOccurrence << " " << maxNumber << nl;
  
    return 0;
}