#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll ar[n+2];
        for(int i=0; i<n; i++)
            cin>>ar[i];
        ll mn=1e9,here=0;
        for(int i=1; i<=100; i++)
        {
            here=0;
            for(int j=0; j<n; j++)
            {
                if(ar[j]!=i)
                {
                    here++;
                    j+=(k-1);
                }
            }
            mn=min(here,mn);
        }
        cout<<mn<<endl;
    }
}
