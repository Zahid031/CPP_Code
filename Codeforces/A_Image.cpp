#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, i;
    string p, q, n;
    cin >> t;
   // vector<string> v;

    while (t--)
    {
        cin >> p >> q;
        n = p + q;
        set<string>s;
        for(i=0; i<n.length(); i++){
            s.insert(string(1,n[i]));
        }
        cout << s.size()-1 << endl;
    }
    return 0;
}