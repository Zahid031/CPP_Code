#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c = 0;
    cin >> n;
    for (auto i = 48; i <= 10000; i += 100)
    {
        if (n > i)
            c++;
        else
            break;
    }
    if (n < 148)
        cout << "99" << endl;
    else
        cout << (c * 100) - 1 << endl;
    return 0;
}