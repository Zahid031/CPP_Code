#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str1, str2, str3;
    cin >> str1 >> str2 >> str3;
    multiset<char> m1, m2;
    for(auto elem: str1)
    {
        m1.insert(elem);
    }
    for(auto elem: str2)
    {
        m1.insert(elem);
    }
    for(auto elem: str3)
    {
        m2.insert(elem);
    }
    cout << (m1 == m2 ? "YES" : "NO");
}
