#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,q,c1[100005],c2[100005];
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        c1[a]++;
        c2[c1[a]]++;

    }
    char ch;
    int x;
    cin>>q;
    while(q--)
    {
        cin>>ch>>x;

        if(ch=='+')
        {
            c1[x]++;
            c2[c1[x]]++;
        }
        else
        {
            c2[c1[x]]--;
            c1[x]--;
        }
        if(c2[8]>0||c2[4]>1||(c2[6]>0&&c2[2]>=2)||(c2[4]>0&&c2[2]>=3))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
}
