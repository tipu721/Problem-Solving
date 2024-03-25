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
        cin>>n;
        string s;
        int ok=0,ans=0;
        cin>>s;
        int i;
        for(i=0; i<n; )
        {
            if(s[i]=='(' && s[i+1]==')' )
            {
                ans++;
                i+=2;

            }
            else if(s[i+1]==s[i])
            {
                i+=2;
                ans++;

            }

            else
            {
                ok=0;
                for(int j=i+1; j<n; j++)
                    {
                        if(s[j]==')')
                        {
                            ok=1;
                            i=j+1;
                            ans++;
                            break;

                        }
                    }
                if(!ok)
                    break;
            }
        }
        cout<<ans<<" "<<n-i<<endl;
    }

}

