#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ar[3];
    cin>>t;
    while(t--)
    {
        cin>>ar[0]>>ar[1]>>ar[2];
        sort(ar,ar+3);
        if(ar[1]!=ar[2])
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl<<ar[0]<<" "<<ar[0]<<" "<<ar[2]<<endl;
    }
}
