#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        ll n,a,b;
        ll c1=0,c2=0;
        for(int i=1; i<=n; i++)
        {
            if(i>a && i!=b)
            {
                c1++;
            }
            if(i<b && i!=a)
                c2++;
        }
        if(c1>=n/2 && c2>=n/2)
        {

        }


    }




}

