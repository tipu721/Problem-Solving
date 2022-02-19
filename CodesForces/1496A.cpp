#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        string s1=s;
        reverse(s.begin(),s.end());
        int pos=-1;
        for(int i=0,j=n-1; i<n/2; i++,j--)
        {
            if(s1[i]!=s1[j])
            {
                pos=i;
                break;
            }
        }
        //cout<<pos<<endl;
        if(pos==-1)
        {
            if(k==0 ||(n%2==1&&s==s1) )
                cout<<"YES"<<endl;
            else if(n%2==0&&s==s1&&k<(n/2))
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
            if(k<=pos)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }


}

