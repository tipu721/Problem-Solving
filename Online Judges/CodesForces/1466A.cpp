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
        int arr[n+4];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];

        }
        if(n==1)
            cout<<0<<endl;
        else
        {
            set<int>st;
            for(int i=0;i<n;i++)
            {
                for(int j=i+1; j<n; j++)
                {
                    st.insert( abs(arr[i]-arr[j]));

                }
            }
            cout<<st.size( )<<endl;
        }
    }
}
