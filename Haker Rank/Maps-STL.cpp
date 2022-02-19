#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mymap;
    int q,sum=0;
    string x;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int a,y=0;
        cin>>a;
        if(a==1)
        {
            cin>>x>>y;
            mymap[x]+=y;

            //mymap.insert(make_pair(x,mymap[x]+=y));
        }
        if(a==2)
        {
            cin>>x;
            mymap.erase(x);

        }
        if(a==3)
        {
            cin>>x;
            cout<<mymap[x]<<endl;

       }
    }
    return 0;
}
