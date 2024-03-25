#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int k=n/4;
        if(n%4)
            k++;
        for(int i=1;i<=n;i++)
        {
            if(i<=n-k)
            cout<<9;
            else
                cout<<8;
        }
//        for(int i=1;i<=k;i++)
//        {
//            cout<<8;
//        }
        cout<<endl;

    }

}
