#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,ans=0,car[505][505]= {0};
        char ar[505][505];
        cin>>n>>m;

        for(int i=1; i<=n; i++)
        {
            int c=1;
            for(int j=1; j<=m; j++)
            {
                cin>>ar[i][j];
                if(ar[i][j]=='*')
                {
                    car[i][j]=c;
                }
                else
                    c++;
            }
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                cout<<car[i][j]<<" ";
            }
            cout<<endl;
        }
        int c=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=m; j++)
            {
                int h=0;
                if(ar[i][j]=='*')
                {
                    h=1;
                    int le=j-1,ri=j+1,f=1;
                    for(int k=i+1; k<=n; k++)
                    {
                        if(ar[k][j]=='*' and car[k][le]==car[k][ri] and car[k][le] and le>=1 and ri<=m)
                        {
                            h++;
                            le--;
                            ri++;
                        }
                        else
                            break;
                    }
                }

                ans+=h;
            }
        }
        cout<<ans<<endl;

    }
}

