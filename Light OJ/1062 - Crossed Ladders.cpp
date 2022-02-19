#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    for(int i=1; i<=tc; i++)
    {
        long double x,y,h,c,h1,h2,r,l,mid;
        cin>>x>>y>>c;
        l=0.0;
        r=min(x,y);
        while(r-l<.00000001)
        {
            mid=(l+r)/2.00;
            h1=sqrt(x*x-mid*mid);
            h2=sqrt(y*y-mid*mid);
            h=(h1*h2)/(h1+h2);
            if(h<c)
               r=mid;
            else
               l=mid;


        }
        cout<<"Case "<<i<<": "<<setprecision(10)<<mid<<endl;

    }
}
