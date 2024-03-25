#include<bits/stdc++.h>
using namespace std;
long long power(long long a,long long b)
{
    long long i,sum=1;
    for( i=1;i<=b;i++)
    {
        sum=sum*a;
    }
    return sum;
}
int main()
{
    long long a,i,j;
    while(cin>>a)
    {
        for(i=1; i<=a; i++)
            cout<<"0";
        cout <<endl;
        for(i=1; i<=a-1; i++)
            cout<<"0";
        cout<<"1\n";
        long long b,c;
        for(j=power(10,a-1);j<power(10,a);j++)
        {
            b=j%power(10,a/2);
            c=j/power(10,a/2);
            if(((b+c)*(b+c))==j)
                cout <<j<<endl;
        }

    }
    return 0;

}
