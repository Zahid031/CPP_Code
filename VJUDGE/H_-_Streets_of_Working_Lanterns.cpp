#include <bits/stdc++.h>
#define mod 1000000007
#define int long long
#define endl '\n'
int maxn = 1;
#define mx 40000001
using namespace std;
void solve()
{
    int x,y=0,i,a,b,c;
     string s1;
     cin>>s1;
     for(i=0;i<s1.size();i++)
     {
        if(s1[i]==')')
        {
            x++;
        }
        else if(s1[i]=='(')
        {
            y++;
        }
        else
        {
         a++;
        }
     }
     if(x<=y)
     {
       y-=x;
       x-=x;
     }
     else
     {
        x-=y;
        y-=y;
     }
     //cout<<x<<" "<<y<<endl;
     if((x==0 && y==0) && a%2==1)
     {
        cout<<"Impossible"<<endl;
     }
     else if(x>0)
     {
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]=='?')
            {
             s1[i]='(';
             x--;
            }
            if(x==0)
            {
                break;
            }
        }
        b=1;
        for(i=0;i<s1.size();i++)
        {
           if(s1[i]=='?' && b==1)
            {
             s1[i]='(';
             b--;
            }
            else if(s1[i]=='?' && b==0)
            {
               s1[i]=')';
                b++; 
            }      
        }
      
        c=0;
        for(i=0;i<s1.size();i++)
        {
           if(s1[i]=='(' && c>=0)
            {
             c++;
            }
            else if(s1[i]==')' && c>=1)
            {
                c--; 
            }      
        }
        //cout<<c<<endl;
        if(c==0)
        {
            cout<<s1<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
     }
      else if(y>0)
     {
        for(i=0;i<s1.size();i++)
        {
            if(s1[i]=='?')
            {
             s1[i]=')';
             y--;
            }
            if(y==0)
            {
                break;
            }
        }
        b=1;
        for(i=0;i<s1.size();i++)
        {
           if(s1[i]=='?' && b==1)
            {
             s1[i]='(';
             b--;
            }
            else if(s1[i]=='?' && b==0)
            {
               s1[i]=')';
                b++; 
            }      
        }
        c=0;
        for(i=0;i<s1.size();i++)
        {
           if(s1[i]=='(' && c>=0)
            {
             c++;
            }
            else if(s1[i]==')' && c>=1)
            {
                c--; 
            }      
        }
        //cout<<c<<endl;
        if(c==0)
        {
            cout<<s1<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        }
     }
     else
     {
       b=1;
        for(i=0;i<s1.size();i++)
        {
           if(s1[i]=='?' && b==1)
            {
             s1[i]='(';
             b--;
            }
            else if(s1[i]=='?' && b==0)
            {
               s1[i]=')';
                b++; 
            }      
        }
        c=0;
        for(i=0;i<s1.size();i++)
        {
           if(s1[i]=='(' && c>=0)
            {
             c++;
            }
            else if(s1[i]==')' && c>=1)
            {
                c--; 
            }      
        }
       // cout<<c<<endl;
        if(c==0)
        {
            cout<<s1<<endl;
        }
        else
        {
            cout<<"Impossible"<<endl;
        } 
     }

}
int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int t;
    t = 1;
    // cin>>t;
    while (t--)
    {
        solve();
    }
    return 0;
}