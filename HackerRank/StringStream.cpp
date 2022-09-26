#include <bits/stdc++.h>
using namespace std;
int main()
{
    stringstream ss;
    int n;
    vector<int> v;
    string s, str;
    cin >> s;
    ss << s;
    //ss >> n;
    char temp;
    while (ss >> n)
    {
        v.push_back(n);
        ss>>temp;
    }
    for(int i=0; i<v.size(); i++){
        cout << v[i] << endl;
    }
    return 0;
}
