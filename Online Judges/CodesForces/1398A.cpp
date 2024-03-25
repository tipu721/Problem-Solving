#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ar[500000];
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        if(ar[0]+ar[1]<=ar[n-1])
            cout<<1<<" "<<2<<" "<<n<<endl;
        else
            cout<<-1<<endl;
    }


}
