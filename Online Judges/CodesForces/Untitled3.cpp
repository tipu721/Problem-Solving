#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,pod=1,sum=0;
        cin>>n;
        for(int k=0;;k++)
        {
            pod=1;
            for(int i=1;i<=k;i++)
            {
               pod=pod*i;
            }
            sum+=pod;
            if(k>1&&n%sum==0)
            {
                cout<<n/sum<<endl;
                break;
            }
        }
    }
}
