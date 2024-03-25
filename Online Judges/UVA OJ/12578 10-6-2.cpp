#include<bits/stdc++.h>
#include<math.h>
#define Pi 2*acos(0.0)
using namespace std;

int main()
{
    int t;
    double l;
    double r,w;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>l;
        r=(2/10.0)*l;
        w=(6/10.0)*l;
        double ans1=Pi*r*r;
        double ans2=(l*w)-(Pi*r*r);

        printf("%.2lf %.2lf\n",ans1,ans2);
    }
}
