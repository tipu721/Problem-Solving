#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ar[104][104];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                ar[i][j]=0;
            }


        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==j)
                {
                    ar[i][j]=1;

                }
                if((i+j)==n-1)
                {
                    ar[i][j]=1;
                }

            }


        }
        if(n%2!=0)
        {
            ar[0][n/2]=1;
            ar[n/2][0]=1;
            ar[0][0]=0;
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cout<<ar[i][j]<<" ";
            }
            cout<<endl;
        }

    }
}
