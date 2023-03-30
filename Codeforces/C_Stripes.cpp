#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    char c;
    cin >> t;
    while(t--)
    {
        int c1=0;
        int c2=0;
        for(int i=0; i<24; i++){
            cin >> c;
            if(c=='B')
            c1++;
            if(c=='R')
            c2++;
        }
        if(c1>c2)
        cout << "R" << endl;
        else cout << "B" << endl;
    }
    return 0;
}