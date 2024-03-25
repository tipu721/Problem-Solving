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
        int n;
        cin>>n;
        int a[n+2];
        map<int,int>mp;
        for(int i=1;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
            stack< int > st;
            st.push(i);
            if(mp.find(i)==mp.end( ))
            {
                int id = i;
                while(a[id] != i)
                {
                    st.push( a[id]);
                    id=a[id];
                }
                int v=st.size();
                while(!st.empty())
                {
                    int top = st.top();
                    st.pop();
                    mp[top]=1;
                    a[top]=v;
                }

            }
        }
        for( int i=1; i<=n; i++)
        {
            cout<<a[i]<<" ";

        }
        cout<<endl;

    }
    return 0;

}

