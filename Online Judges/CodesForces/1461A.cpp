#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int ans=n/3;
        for(int i=1;i<=ans;i++)
            cout<<"abc";
        if(n%3==1)
        cout<<"a";
        if(n%3==2)
            cout<<"ab";
        cout<<endl;

    }

}
