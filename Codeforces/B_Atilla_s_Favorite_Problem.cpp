#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--){
        vector<char> v;
        int n;
        char c;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> c;
            v.push_back(c);
        }
        sort(v.begin(),v.end());
        
        cout << int(v[n-1])-96 << endl;

    }
 
 
 
    return 0;
}