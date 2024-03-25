#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,int>>vec;
    int n,alice,a;
    cin>>n>>alice;
    int s=alice;
    for(int i=1;i<n;i++)
    {
        cin>>a;
        vec.push_back(make_pair(a,i+1));
        s+=a;
    }
    sort(vec.begin(),vec.end());
   // cout<<alice<<endl<<s<<endl;
    if(alice>s/2)
    {
        cout<<1<<endl<<1;
        main();
        return 0;
    }
    int ans=alice,arr[1001],p=0;
    for(int i=vec.size()-1;i>=0;i--)
    {
        if(alice>s/2)
            break;
        else if(2*vec[i].first<=alice)
        {
            ans+=vec[i].first;
            arr[p++]=vec[i].second;
        }

    }
    //cout<<s<<endl<<ans<<endl<<p<<endl;
    if(ans>s/2)
    {
        //p++;
        cout<<p+1<<endl<<1<<" ";
        for(int i=0;i<p;i++)
        {
            cout<<arr[i]<<" ";
        }

    }
    else
        cout<<0<<endl;
    main();
}
