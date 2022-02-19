#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb   push_back;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,x1,y1,x2,y2;
        char ar[405][405];
        cin>>n;
        int c=0;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cin>>ar[i][j];
                if(c==0&&ar[i][j]=='*')
                {
                    c++;
                    x1=i,y1=j;
                }
                else if(ar[i][j]=='*')
                {
                    x2=i,y2=j;
                }

            }
        }
        if(x1==x2)
        {
            if(x1+1<=n)
            {
                ar[x1+1][y1]='*';
                ar[x2+1][y2]='*';
            }
            else
            {
                ar[x1-1][y1]='*';
                ar[x2-1][y2]='*';
            }
        }
        else if(y1==y2)
        {
            if(y1+1<=n)
            {
                ar[x1][y1+1]='*';
                ar[x2][y2+1]='*';
            }
            else
            {
                ar[x1][y1-1]='*';
                ar[x2][y2-1]='*';
            }
        }
        else
        {
            ar[x1][y2]='*';
            ar[x2][y1]='*';
        }
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                cout<<ar[i][j];

            }
            cout<<endl;
        }
    }

}

