#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a1,b1,c1,a2,b2,c2;
    while(cin>>a1>>b1>>c1>>a2>>b2>>c2)
    {
        if(a1==0&&b1==0&&c1==0&&a2==0&&b2==0&&c2==0)
            break;
        double x,y;
        if((a2*b1-a1*b2)==0||(a2*b1-a1*b2)==0)
            cout<<"No fixed point exists.\n";
        else
        {
            x=(b1*c2-b2*c1)/(a2*b1-a1*b2);
            y=(a2*c1-a1*c2)/(a2*b1-a1*b2);
            printf("The fixed point is at %.2lf %.2lf.\n",x,y);
        }
    }
    return 0;

}
