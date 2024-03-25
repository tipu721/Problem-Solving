
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long n,l=0,mx=0,c=0;;
    cin>>n;
    long b,d;
    map<long,long>m;
    for(int i=0; i<n; i++)
    {
        cin>>b>>d;
        m[b]++;
        m[d]--;
    }



    for(map<long,long>::iterator i=m.begin(); i!=m.end(); i++)
    {
        c+=i->second;
        cout<< i->first <<" "<< i->second<<endl;

        if(c>mx)
        {
            mx=c;
            l=i->first;
        }
    }

    cout<<l<<" "<<mx;
}
