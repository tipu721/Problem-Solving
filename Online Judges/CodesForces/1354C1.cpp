#include<bits/stdc++.h>
using namespace std;
#define PI 3.14159265358979
int main()
{
    int t;
    cin>>t;
    while(t--)
    {

        double angle,n,a;
        cin>>n;
        angle =360.00/(2*n*2);
        angle=angle*(PI/180);

        a=0.5/tan(angle);

        cout<<fixed<<setprecision(10)<<a*2<<endl;
    }


}
