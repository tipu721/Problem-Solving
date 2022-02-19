#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,l,u;
    cin>>t;
    while(t--)
    {
        cin>>l>>u;
        int mx=0,i,c,ans;
        for(i=l; i<=u; i++)
        {
            c=0;
            for(int j=1; j*j<=i; j++)
            {
                if(i%j==0)
                {
                    if(i/j==j)
                        c++;
                    else
                        c+=2;
                }

                if(c>mx)
                {
                    ans=i;
                    mx=c;
                }
            }

        }
        printf("Between %d and %d, %d has a maximum of %d divisors.\n",l,u,ans,mx);
    }
    return 0;
}
