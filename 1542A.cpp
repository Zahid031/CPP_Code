#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, T, a[10000],n;
    cin >> T;
    while (T--)
    {
        int count = 0;
        cin >> n;
        for (i = 0; i < 2*n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 1)
                count++;
        }
        if(count==n)
        cout << "Yes"<<endl;
        else cout <<"No"<<endl;
    }
    return 0;
}