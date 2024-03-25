#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>> n>> k;
        string s;
        cin>>s;
        int v=n/k,sum=0;
        for(int i=0,l=1; i<k/2; i++,l+=2)
        {
            map<char,int>mp;
            int mx=0;
            for(int j=i; j<n; j+=k)
            {
                mp[s[j]]++;
                mp[s[j+k-l]]++;
                mx=max(mx,mp[s[j]]);
                mx=max(mx,mp[ s[j+k-l ] ]);
            }
               sum+=(v+v-mx);
        }
        if(k%2)
        {
            map<char,int>mp;
            int mx=0;
            for(int j=k/2; j<n; j+=k)
            {
                mp[s[j]]++;
                mx=max(mx,mp[s[j]]);
            }
            sum+=(v-mx);

        }
        cout<<sum<<endl;
    }
    return 0;

}

