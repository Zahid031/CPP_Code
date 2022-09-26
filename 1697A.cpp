#include<iostream>
using namespace std;
int main()
{
    int t,n,m,a;
    cin >> t;
    while(t--)
    {
        int sum = 0;
        cin >> n >> m;
        for(int i=0; i<n ; i++)
        {
            cin >> a;
            sum = sum+a;
        }
        if(m<sum)
            cout << sum - m << endl;
        else cout << "0" << endl;
    }
    return 0;
}
