#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        set<int>st;
        int n,a,ans=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(a%2==0)
            {
                st.insert(a);
            }
        }
        for(auto i=st.begin();i!=st.end();i++)
        {

        }
        cout<<ans<<endl;

    }
}
