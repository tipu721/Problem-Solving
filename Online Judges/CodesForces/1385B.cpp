#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[50]= {0};
        n=n*2;
        while(n--)
        {
            int a;
            cin>>a;
            if(ar[a]==0)
            {
                cout<<a<<" ";
                ar[a]=1;
            }

        }
        cout<<endl;

    }
}
