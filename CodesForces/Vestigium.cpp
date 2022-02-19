#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n,arr[105][105],k=0,r=0,c=0;
        cin>>n;
        for(int i=0; i<n; i++)
            for(int j=0; j<n; j++)
            {
                cin>>arr[i][j];
                if(i==j)
                    k+=arr[i][j];
            }
        for(int i=0; i<n; i++)
        {
            int ar[105]= {0};
            for(int j=0; j<n; j++)
            {
                ar[arr[i][j]]++;
            }
            for(int m=1; m<=n; m++)
            {
                if(ar[m]>1)
                {
                    r++;
                    break;
                }

            }
        }
        for(int j=0; j<n; j++)
        {
            int ac[105]= {0};
            for(int i=0; i<n; i++)
            {
                ac[arr[i][j]]++;
            }
            for(int m=1; m<=n; m++)
            {
                if(ac[m]>1)
                {
                    c++;
                    break;
                }

            }
        }
        cout<<"Case #"<<i<<": "<<k<<" "<<r<<" "<<c<<endl;


    }
    return 0;
}
