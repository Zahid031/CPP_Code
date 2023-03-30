#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    reverse(s2.begin(), s2.end());
    //cout << s2 << endl;
    if (s1 == s2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}