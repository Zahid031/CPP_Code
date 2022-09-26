#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,x,y;
    set<int>s;
    cin >> t;
    while(t--){
        cin >> y >> x;
        if(y==1){
            s.insert(x);
        }
        else if(y==2){
            s.erase(x);
        }
        else {
            if(s.find(x)==s.end())
            cout << "No" << endl;
            else cout << "Yes"<< endl;
        }
    }
    return 0;
}