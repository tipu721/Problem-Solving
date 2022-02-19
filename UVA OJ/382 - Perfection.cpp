#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, f=0;
    //cout<<"PERFECTION OUTPUT\n";
    while(cin>>n)
    {

        if(n==0)
        {
            cout<<"END OF OUTPUT\n";
            break;
        }
        f++;
        if(f==1)
            cout<<"PERFECTION OUTPUT\n";
        long long sum=0;
        for(int i=1; i<=n/2; i++)
        {
            if(n%i==0)
                sum+=i;
        }
        //cout<<sum<<endl;
        int c=0,p=n;
        while(p!=0)
        {
            // int ans=sum/10;
            c++;
            p=p/10;
            //fdssdfl
//fdsasa

        }
        //cout<<c<<endl;
        // cout<<sum<<endl;
        for(int i=1; i<=5-c; i++)
            cout<<" ";
        if(sum==n)
            cout<<n<<"  PERFECT\n";
        else if(sum>n)
            cout<<n<<"  ABUNDANT\n";
        else if(sum<n)
            cout<<n<<"  DEFICIENT\n";

    }
}
