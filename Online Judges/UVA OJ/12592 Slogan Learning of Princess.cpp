#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a[25],b[25],c;
    int n,m;
    while(cin>>n)
    {
        getchar();
        for(int i=0;i<n;i++)
        {
            getline(cin,a[i]);
            getline(cin,b[i]);
        }
        cin>>m;
        getchar();
        for(int i=1;i<=m;i++)
        {
            getline(cin,c);
            for(int j=0;j<n;j++)
            {
                if(c==a[j])
                {
                    cout<<b[j]<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
