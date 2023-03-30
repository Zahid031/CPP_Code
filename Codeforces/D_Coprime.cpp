
#include <bits/stdc++.h>
using namespace std;

// function to check for gcd
bool coprime(int a, int b)
{
    return (__gcd(a, b) == 1);
}

int main()
{
    int t, arr[1000], n;
    cin >> t;
    while (t--)
    {
        int c=0,a,b[1000],c[1]={0};
        cin >> n;
        vector<int>v;
        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }
        for (int i = n; i > 0; i--)
        {

            for (int j = n; j > 0; j--)
            {
                a=0;
                if (coprime(arr[i], arr[j]))
                c++;
                b[i]==i+j;
                if((b[i])>c[])
                swap(b[i-1],b[i]);
                //v.push_back(a);
            }
            
        }
        if(c>=1)
        cout << b[n-1] << endl;
        else cout << "-1" << endl;
        //return 0;
        //v.clear();

    }
    return 0;
}