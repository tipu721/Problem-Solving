#include<bits/stdc++.h>
using namespace std;
int main()
{
    set<int>myset;
    int q,y,x;
    cin>>q;
    for(int i=1; i<=q; i++)
    {
        cin>>y>>x;
        if(y==1)
            myset.insert(x);
        else if(y==2)
            myset.erase(x);
        else if(y==3)
        {
            set<int>::iterator it = myset.find(x);
            if(it==myset.end())
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }

    }
    return 0;
}
