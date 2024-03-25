#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,b,h,w,p,room,r,mn=15000000;
    while(cin>>n>>b>>h>>w)
    {
        for(int i=1; i<=h; i++)
        {
            cin>>p;
            for(int j=1; j<=w; j++)
                cin>>room;
                r=0;
                if(room>=n)
                {
                    r=n*p;
                    if(mn>r)
                    {
                        mn=r;
                    }
                }
        }
        if(mn>b)
            cout<<"stay home\n";

        else
            cout<<mn<<endl;
        mn=15000000;
    }
    return 0;
}
