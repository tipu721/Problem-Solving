#include<bits/stdc++.h>
#define eps 1e-12
using namespace std;
long double area(long double s,long double a,long double b,long double c)
{
    return sqrt(s*(s-a)*(s-b)*(s-c));
}
long double rat(long double a,long double b)
{
    return a/b;
}
int main()
{
    int tc;
    cin>>tc;
    for(int i=1;i<=tc;i++)
    {
        long double ab,ac,bc,r,s1,s2,high,low,mid,ae,de;
        cin>>ab>>ac>>bc>>r;
        s1=(ab+bc+ac)/2.00;
        long double abc=area(s1,ab,ac,bc);
        low=0.00;
        high=ab;
        while(low+eps<high)
        {
            mid=(high+low)/2.0;
            ae=(mid*ac)/ab;
            de=(mid*bc)/ab;
            s2=(mid+de+ae)/2.00;
            long double ade=area(s2,mid,ae,de);
            long double bcde=abc-ade;
            long double r1=ade/bcde;
            if(r1<r)
                low=mid;
            else
                high=mid;


        }
         cout<<"Case "<<i<<": "<<setprecision(10)<<mid<<endl;
    }
}
