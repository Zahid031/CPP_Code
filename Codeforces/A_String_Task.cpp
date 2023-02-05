#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin >> a;
    for(int i=0; i<a.length(); i++){
        a[i]=tolower(a[i]);
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='y')
        continue;
        else b+='.';
        b+=a[i];
    }
    cout << b << endl;
    return 0;
}