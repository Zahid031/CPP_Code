#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, a;
        vector<int> v,v1;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> a;
            v.push_back(a);
            v1.push_back(a);
        }
        //int max = *max_element(v.begin(), v.end());
        sort(v.begin(), v.end());
        int max=v[n-1];
        for (int i = 0; i < n; i++)
        {
            //int temp=i; 
            if (v1[i] == max)
            {
                

                cout << max - v[n - 2] << " ";
                //i=temp;
            }
            else
                cout <<v1[i]-max << " ";
        }
        cout << endl;
    }

    return 0;
}