
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
        long long  k=0,sum=0;
        while(1)
        {
            sum+=((int)pow(2,k));
            sum--;
            if(n%sum==0)
            {
                break;
                cout<<n/sum<<endl;
                break;
            }
            k++;
        }
    }
}
