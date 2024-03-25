#include<bits/stdc++.h>

using namespace std;




#define ll long long

#define tej ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);

#define ve vector<int>

#define vl vector<long long int>

#define pb push_back

#define fo(i,n) for(i=0;i<n;i++)




void solve()

{

    ll n,t,i;

    cin>>n;

    string s,a,b,c;

    char z;

    fo(i,n)

    {

        cin>>z;

        s+=z;

    }

    b=s;

    sort(b.begin(),b.end());

    map<string,ll>m;

    queue<string> q;

    q.push(s);

    m[s]=0;

    while(!q.empty())

    {

        a=q.front();

        if(a==b)

            break;

        q.pop();

        for(i=2; i<=n; i++)

        {

            c=a;

            reverse(c.begin(),c.begin()+i);

            if(m[c]==0)

            {

                m[c]=m[a]+1;

                q.push(c);

            }

            c.clear();

        }

        a.clear();

    }

    cout<<m[b];

}

int main()

{

    tej

    int t=1;

//cin>>t;

    while(t--)

    {

        solve();

    }

    return 0;

}
