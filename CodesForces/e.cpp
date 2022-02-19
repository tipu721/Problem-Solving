#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ar[102][102];
    cin>>n;
    int mx=-127*1000,sum1=0,sum2=0,sum3=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>ar[i][j];
            mx=max((ar[i][j]),mx);
        }
    }
    sum1=0;
    sum2=0;
    sum3=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            sum1+=ar[i][j];
            mx=max(mx,sum1);
            sum3+=sum1;
            mx=max(mx,sum3);

        }
        sum2+=sum1;
        mx=max(mx,sum2);

    }
    sum1=0,sum2=0,sum3=0;
    for(int j=0; j<n; j++)
    {
        for(int i=0; i<n; i++)
        {
            sum1+=ar[i][j];
            mx=max(mx,sum1);
            sum3+=sum1;
            mx=max(mx,sum3);

        }
        sum2+=sum1;
        mx=max(mx,sum2);

    }
    cout<<"OK"<<endl;
    cout<<mx<<endl;
}
