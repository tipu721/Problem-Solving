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
        double  k=0,sum=0;
        while(1)
        {
            sum+=(pow(2,k));
            sum--;
            long long ans=(int)sum;
            if(n%ans==0)
            {

                cout<<n/ans<<endl;
                break;
            }
            k++;
        }
    }
}
