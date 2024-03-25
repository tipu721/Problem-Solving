#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>n;
        cin>>s;
        vector<int>ans;
        int one=0,zero=0;
        int mx=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                one++;
                if(zero)
                {
                    ans.push_back(zero);
                    zero--;

                }
                else
                    ans.push_back(one);
            }
            else
            {
                zero++;
                if(one)
                {
                    one--;

                }
                ans.push_back(zero);

            }
            mx=max(mx,max(zero,one));
        }
        cout<<mx<<endl;
        for(int i=0;i<n;i++)
            cout<<ans[i]<<" ";
        cout<<endl;

    }

}
