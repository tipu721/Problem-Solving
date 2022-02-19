#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        double n,tax;
        cin>>n;
        if(n<=180000)
            tax=0;
        else if(n<=480000)
            tax=((n-180000)*10)/100;
        else if(n<=880000)
            tax=((300000*10)+(n-480000)*15)/100;
        else if(n<=1180000)
            tax=((300000*10)+(400000*15)+(n-880000)*20)/100;
        else
            tax=((300000*10)+(400000*15)+(300000*20)+(n-1180000)*25)/100;
        long long result=ceil(tax);
        if(tax==0)
            printf("Case %d: %lld\n",i,result);
        else if(tax<=2000)
            printf("Case %d: 2000\n",i);
        else
           printf("Case %d: %lld\n",i,result);

    }
    return 0;
}
