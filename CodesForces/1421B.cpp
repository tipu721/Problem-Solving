#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string ar[205];
        cin>>n;

        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
        }
        string a,b,c,d;
        a=ar[0][1];
        b=ar[1][0];
        c=ar[n-2][n-1];
        d=ar[n-1][n-2];
        int ans=0;
        if(a==b)
        {
            if(a==c&&a==d)
            {
                cout<<2<<endl;
                cout<<1<<" "<<2<<endl;
                cout<<2<<" "<<1<<endl;
            }
            else if(a==c&&a!=d)
            {
                cout<<1<<endl;
                cout<<n-1<<" "<<n<<endl;
            }
            else if(a!=c&&a==d)
            {
                cout<<1<<endl;
                cout<<n<<" "<<n-1<<endl;
            }
            else
                cout<<0<<endl;
        }
        else if(a!=b)
        {
            if(c==d&&c=="0")
            {
                cout<<1<<endl;
                if(a=="0")
                    cout<<1<<" "<<2<<endl;
                else
                    cout<<2<<" "<<1<<endl;
            }
            else if(c==d&&c=="1")
            {
                cout<<1<<endl;
                if(a=="1")
                    cout<<1<<" "<<2<<endl;
                else
                    cout<<2<<" "<<1<<endl;
            }
            else
            {
                cout<<2<<endl;
                if(a=="1")
                    cout<<1<<" "<<2<<endl;
                else
                    cout<<2<<" "<<1<<endl;
                if(c=="0")
                    cout<<n-1<<" "<<n<<endl;
                else
                    cout<<n<<" "<<n-1<<endl;
            }
           // else
        }
    }

}
