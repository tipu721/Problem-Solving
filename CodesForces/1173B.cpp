#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    double n;
    cin>>n;
    int m=ceil(sqrt(n+1)),c=0;
    cout<<m<<endl;
    for(int i=1; i<=m; i++)
    {
        for(int j=1; j<=m; j++)
        {
                cout<<i<<" "<<j<<endl;
                c++;
            if(c==n)
            {
                //main();
                return 0;
            }

        }
    }

}

