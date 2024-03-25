#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt0=0,cnt1=0;
        for(int i=1; i<n; i++)
        {
            if(s[i-1]=='0'&&s[i]=='0')
                cnt0++;

            if(s[i-1]=='1'&&s[i]=='1')
                cnt1++;
        }
        cout<<max(cnt0,cnt1)<<endl;
    }
}
