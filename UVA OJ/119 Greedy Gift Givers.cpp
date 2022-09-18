#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    ll t=1;
    ll n;
    while(cin>>n)
    {
        map<string,int>balance;
        vector<string>names;
        for(int i=0; i<n; i++)
        {
            string name;
            cin>>name;
            balance[name]=0;
            names.push_back(name);
        }
        for(int i=0; i<n; i++)
        {
            string name;
            cin>> name;
            int spentMoney, nPeople;
            cin>>spentMoney,nPeople;
            if(nPeople == 0)
                continue;
            int gift = spentMoney / nPeople;
            balance[name]-=gift*nPeople;
            for(int j =0; j<nPeople; j++)
            {
                cin>>name;
                balance[name] += gift;

            }
            if(t++ > 1)
                cout<<endl;
            for(int i=0; i<n; i++)
            {
                cout<<names[i]
                    <<" "
                    <<balance[names[i]]
                    <<endl;
            }
        }
    }
}
