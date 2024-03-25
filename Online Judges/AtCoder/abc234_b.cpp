#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    double x,y;
    cin >> n;
    vector<pair<double,double>>mypair;


    for(int i=0; i<n; i++)
    {
        cin >> x >> y;
        mypair.push_back(make_pair(x,y));
    }
    double ans=0;
    for(int i=0; i<n; i++)
    {
        ll a1=mypair[i].first;
        ll b1=mypair[i].second;
        for(int j=i+1; j<n; j++)
        {
            ll a2=mypair[j].first;
            ll b2=mypair[j].second;
            ans = max(ans,sqrt((a1-a2)*(a1-a2)+(b1-b2)*(b1-b2)));
        }
    }
    cout<<fixed<<setprecision(10)<<ans<<endl;
   // main();

}

