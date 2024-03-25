#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long s1=0,s2=0,pod=1;
       for(int i=1;i<=n;i++)
       {
           pod=pod*2;
           if(i<(n/2)||i==n)
            s1+=pod;
           else
            s2+=pod;

       }
       cout<<s1-s2<<endl;
    }
}
