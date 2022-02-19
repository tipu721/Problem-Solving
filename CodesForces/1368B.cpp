#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll k;
    cin>>k;
    string s="codeforces";
    ll ar[10];
    for(int i=0; i<10; i++)
        ar[i]=1;
    ll res=1,c=2;
    while(res<k)
    {
        for(int i=1; i<=10; i++)
        {
            res/=(c-1);
            res*=c;
            ar[i-1]=c;
            if(res>=k)
                break;
        }
        c++;
    }
    for(int i=0; i<10; i++)
    {
        while(ar[i]--)
        {
            cout<<s[i];
        }
    }
    cout<<endl;
  //  main();
}
