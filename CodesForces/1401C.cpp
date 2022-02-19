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
        int n;
        vector<int>v1,v2;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            v1.push_back(a);
            v2.push_back(a);
        }
        sort(v2.begin(),v2.end());
        int mn=v2[0],f=1;
        for(int i=0; i<n; i++)
        {

            if(__gcd(v1[i],mn)!=mn && v1[i]!=v2[i])
            {
                f=0;
                break;
            }

        }
        if(f)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

}

