#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        ll ar[n+3];
        for(int i=0; i<n; i++)
            cin >> ar[i];
        ll c1=0,c2=0;
        for(int i=0; i<n; i++)
        {
            if(ar[i]%2==0)
            {
                c1++;
            }
            else
                c2++;

        }

        cout<<min(c1,c2)<<endl;
    }
}
