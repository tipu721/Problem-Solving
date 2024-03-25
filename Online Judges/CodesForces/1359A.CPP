#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;
        int each=n/k;
        int win=min(m,each);
        cout<<win<<endl;
    }
}
