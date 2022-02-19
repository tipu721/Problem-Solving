#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,r,g,b,w;
    cin>>t;
    while(t--)
    {
        cin>>r>>g>>b>>w;
        int f=0,c=0;
        while(1)
        {
            c++;

            if(r%2==0&&g%2==0&&b%2==0)
            {
                f=1;
                break;
            }
            else if(r%2==0&&g%2==0&&w%2==0)
            {
                f=1;
                break;
            }
            else if(r%2==0&&b%2==0&&w%2==0)
            {
                f=1;
                break;
            }
            else if(g%2==0&&b%2==0&&w%2==0)
            {
               f=1;
               break;
            }
            if(r==0||g==0||b==0||c>4)
                break;
            r--;
            g--;
            b--;
            w+=3;


        }
        if(f==1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
