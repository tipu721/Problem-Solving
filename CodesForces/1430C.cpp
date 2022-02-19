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
        cout<<2<<endl;
        if(n==2)
        {
            cout<<1<<" "<<2<<endl;
            continue;
        }
        int ans=n-1;
        for(int i=1; i<=ans; i++)
        {
            if(i==1)
                cout<<n<<" "<<n-2<<endl;
            else if(i==2)
                cout<<n-1<<" "<<n-1<<endl;
            else
            {
                cout<<n-1<<" "<<n-3<<endl;
                n--;
            }

        }
    }
}
