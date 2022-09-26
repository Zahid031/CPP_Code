#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int p, x;
        cin >> p;
        {
        if (p % 2 == 0)
        
            x = ((p * p) / 48)+(p/4);
            else
            x = (((p + 3) * (p + 3)) / 48); //+(p/4);
        }
        cout << x << endl;
    }
}