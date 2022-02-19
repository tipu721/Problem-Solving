#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int a,b,ans;
    while(t--)
    {
        cin>>a>>b;

        if(min(a,b)*2>=max(a,b))
            cout<<min(a,b)*min(a,b)*4<<endl;
        else
            cout<<max(a,b)*max(a,b)<<endl;
    }
}
