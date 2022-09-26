#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        char c;
        int n;
        string s1 = "";
        string s2 = "";
        vector<char> ch;
        cin >> n;
        for (int i = 0; i < 2 * n; i++)
        {
            cin >> c;
            if (c == 'G')
                ch.push_back('B');
            else
                ch.push_back(c);
        }
        for (int i = 0; i < n; i++)
        {
            s1 = s1 + ch[i];
        }
        for (int i = n; i < 2 * n; i++)
        {
            s2 = s2 + ch[i];
        }
        //cout << s1 << " " << s2 << endl;
        if (s1 == s2)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
            
    }
    return 0;
}