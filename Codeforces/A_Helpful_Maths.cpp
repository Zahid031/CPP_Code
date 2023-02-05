#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    string a;
    cin >> a;
    for(int i=0; i<a.length(); i+=2){
        
        v.push_back(a[i] - '0');
    }
    sort(v.begin(),v.end());
    cout << v[0];
    for(int i=1; i<v.size(); i++){
        cout << '+' << v[i];
    }
}