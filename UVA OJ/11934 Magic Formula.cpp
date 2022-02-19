#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d,l;
    while(cin>>a>>b>>c>>d>>l)
    { long long cunt=0;
        if(a==0&&b==0&&c==0&&d==0&&l==0)
            break;
        for(int i=0; i<=l; i++)
        {
            if((a*i*i+b*i+c)%d==0)
                cunt++;
        }
        cout<<cunt<<endl;

    }
    return 0;
}
