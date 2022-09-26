#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,r;
    string s = "atcoder";
    string str="";
    cin >> l >> r;
    for(int i=l-1; i < r ; i++){
        str.push_back(s[i]);
    }
    cout << str << endl;
}