#include<bits/stdc++.h>
using namespace std;
int arr[200],arr2[200];
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    if(a.size()+b.size()!=c.size())
        cout<<"NO\n";
    else
    {
        for(int i=0; i<a.size(); i++)
            arr[a[i]]++;
        for(int i=0; i<b.size(); i++)
            arr[b[i]]++;
        for(int i=0; i<c.size(); i++)
            arr2[c[i]]++;
        for(int i='A'; i<='Z'; i++)
        {
            if(arr[i]!=arr2[i])
            {
                cout<<"NO\n";
                //main();
                return 0;
            }
        }
        cout<<"YES\n";

    }
    //main();
}
