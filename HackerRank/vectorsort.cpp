#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,n;
    vector<int>v;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
        cout << v[i] << endl;
    }
}