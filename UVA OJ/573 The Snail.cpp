#include<bits/stdc++.h>
using namespace std;
int main()
{
    double h,u,d,f,sum,p;
    while(cin>>h>>u>>d>>f)
    {
        if(h==0)
            break;
        int c=0;
        sum=0;
        p=(u*f)/100.0;
        while(1)
        {
            sum=sum+u;
            c++;
            if(sum>h)
            {
                printf("success on day %d\n",c);
                break;
            }
            sum=sum-d;
            if(sum<0)
            {
                printf("failure on day %d\n",c);
                break;
            }
            u=u-p;
        }
    }
    return 0;
}
