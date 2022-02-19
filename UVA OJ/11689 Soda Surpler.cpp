#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,e,f,c;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>e>>f>>c;
        int n=e+f,result=0,r=0;
        while(n>=c)
        {
            r=n%c;
            n=n/c;
            result=result+n;
            n=n+r;
        }
        cout<<result<<endl;
    }
    return 0;
}
