#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,ar[100005],sum=0;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];

        }
        int c=0,f=-1;
        for(int i=0;i<n;i++)
        {
            c++;
            if(c%2&&ar[i]==1)
                f=1;
            else if(c%2==0&&ar[i]==1)
                f=2;
            else
            {
                if(f==2)
                    f=1;
                else if(f==1)
                    f=2;
                else
                    f=1;
                break;

            }

        }
        if(f==1)
            cout<<"First"<<endl;
        else
            cout<<"Second"<<endl;

    }
}
