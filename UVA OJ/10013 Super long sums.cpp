#include<bits/stdc++.h>
using namespace std;
#define mx 1000005
long long s[mx],ch1[mx],ch2[mx];
int main()
{
    long long t;
    cin>>t;
    for(long long i=1; i<=t; i++)
    {
        int m,sum=0,carry=0,c=0;

        cin>>m;
        for(int j=0; j<m; j++)
        {
            cin>>ch1[j]>>ch2[j];
        }
        for(int k=m-1; k>=0; k--)
        {
            sum=ch1[k]+ch2[k]+carry;
            if(sum>9)
            {
                carry=1;
                s[c]=sum%10;
                c++;
            }
            else
            {
                carry=0;
                s[c]=sum;
                c++;
            }
        }
        if(carry==1)
        {
            s[c]=carry;
            c++;
        }
        if(i!=1)
            cout<<endl;
        for(int l=m-1; l>=0; l--)
            cout<<s[l];
        cout<<endl;

    }
    return 0;

}
