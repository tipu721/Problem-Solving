#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
#define all(v) v.begin(), v.end()
#define pb push_back
#define mp make_pair
#define fs first
#define sn second
#define ll long long
#define mod 1000000007
#define pi 2*acos(0.0)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1')
                cnt++;
        }
        if(n-cnt==1)
            cout<<"BOB"<<endl;
        else if(n-cnt==0)
            cout<<"DRAW"<<endl;
        else if(n%2)
        {
            int tmp=n/2;
            if(s[tmp]=='1')
                cout<<"BOB"<<endl;
            else
                cout<<"ALICE"<<endl;
        }
        else{
            cout<<"BOB"<<endl;
        }
    }
    return 0;

}
