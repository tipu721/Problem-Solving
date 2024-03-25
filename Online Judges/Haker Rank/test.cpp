#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>mymap;
    int q,y;
    string x;
    cin>>q;
    for(int i=1;i<=q;i++)
    {
        int a;
        cin>>a;
        if(a==1)
        {
            mymap.insert(make_pair(cin>>x,cin>>y));
        }
        if(a==2)
        {
            cin>>x;
            mymap.erase(x);

        }
        if(a==3)
        {
            cin>>x;
            cout<<m[x]<<endl;

        }
        return 0;

    }

}
