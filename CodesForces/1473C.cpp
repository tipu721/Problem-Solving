#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans[k+1]= {};
        int temp=k;
        for(int i=2*k-n; i<=k; i++)
            ans[i]=temp--;
        temp=1;
        for(int i= 1; i<= k; i++)
        {
            if(ans[i] == 0)
                ans[i] = temp++;
        }
        for(int i=1; i<=k; i++)
            cout<<ans[i]<<" ";

        cout<<endl;
    }
}
