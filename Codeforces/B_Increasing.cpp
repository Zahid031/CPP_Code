#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int> s;
    int t,n,a;
    cin >> t;
    while(t--){
        cin >>n;
        for(int i=0; i<n; i++){
            cin >>a;
            s.insert(a);
        }
        if(s.size()<n)
        cout << "NO" << endl;
        else cout << "YES" << endl;
        s.clear();
    }
    return 0;
}