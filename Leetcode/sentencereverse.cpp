#include <bits/stdc++.h> 
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)
#define nl "\n"
#define pi 3.141592653
const int MAXN = 1e5 + 5;

void reversentence(string s){
    stack<string> st;
    for(int i=0; i<s.length(); i++){
        string word="";
        while(s[i]!=' ' && i<s.length()){
            word+=s[i];
            i++;
        }
        st.push(word);
    }
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main()
{
    fast;
    string s="Hi my name is Zahid";
    reversentence(s);
  
    return 0;
}