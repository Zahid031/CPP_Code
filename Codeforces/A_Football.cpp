#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> st;
    // vector<string>::iterator it;
    string s, temp;
    int t;
    cin >> t;
    int n = t;
    while (t--)
    {
        cin >> s;
        // temp = s;
        st.push_back(s);
    }

    if (n == 1)

    cout << st[0] << endl;

    else
    {
        sort(st.begin(), st.end());
        cout << st[(n / 2)] << endl;
    }
    // int c = 1;
    // for (int it = 1; it < st.size(); it++)
    // {
    //     if (st[it] == st[0])
    //         c++;
    //     else
    //         temp = st[it];

    //     // cout << st[it] << endl;
    // }
    // if (t == 1)
    //     cout << st[0] << endl;
    // // else if (c > (t-c))
    // //     cout << st[0] << endl;
    // // else
    // //     cout << temp << endl;
    // // // cout << c << endl;
    // // temp=st[1];
    // // cout << temp << endl;

    return 0;
}