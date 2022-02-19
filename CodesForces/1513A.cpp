#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb   push_back;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,ar[105]={0};
        cin>>n>>k;
        int p=n/2;
        if(n%2==0)
            p--;
        if(k>p)
        {
            cout<<-1<<endl;
            continue;
        }
        int c=0;
        p=n;
        for(int i=1; i<=n; i++)
        {
            if(i%2==0 && c<k)
            {
                ar[i]=p;
                c++;
                p--;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(i%2==1 || ar[i]==0)
            {
                ar[i]=p;
                p--;
            }
        }

        for(int i=1; i<=n; i++)
        {
            cout << ar[i] <<" ";
        }
        cout<<endl;

    }

}

