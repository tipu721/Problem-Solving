#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n,arr[200];
    cin>>t;
    while(t--)
    {
        cin>>n;
        for( int i=0;i<n;i++)
            cin>>arr[i];
            int i,c=0;
        for( i=0;i<n;i++)
        {
            int p,q;
            if(arr[i]%2==0)
            {
                cout<<1<<endl;
                cout<<i+1<<endl;
                break;
            }
            else
            {
                //cout<<"c"<<c<<endl;
                c++;
                if(c==1)
                {
                    p=i+1;
                }
                else if(c==2)
                {
                    //cout<<"c"<<c<<endl;
                    cout<<2<<endl;
                    cout<<p<<" "<<i+1<<endl;
                    break;
                }
            }
        }
        if(i==n)
            cout<<-1<<endl;
    }
}
