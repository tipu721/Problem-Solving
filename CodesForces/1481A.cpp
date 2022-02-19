#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int xn=0,xp=0,yn=0,yp=0;
        int f1=0,f2=0;
        for(int i=0; i<s.size(); i++)
        {

            if(s[i]=='R')
                xp++;
            else if(s[i]=='L')
                xn++;
            else if(s[i]=='U')
                yp++;
            else
                yn++;

        }
        if(x==0 || (x>0 && xp>=x))
            f1=1;
        else if(x==0 || (x<0&&xn>=x*-1))
            f1=1;
         if(y==0 || (y>0&&yp>=y))
            f2=1;
        else if(y==0 || (y<0&&yn>=y*-1))
            f2=1;
        if(f1 && f2)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

}
