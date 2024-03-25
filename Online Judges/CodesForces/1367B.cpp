#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,ar[1004],n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        int e=0,o=0;
        for(int i=0; i<n; i++)
        {
            cin>>ar[i];
            if(ar[i]%2==0&&i%2!=0)
                e++;
            if(ar[i]%2!=0&&i%2==0)
                o++;

        }
        if(e==o)
            cout<<e<<endl;
        else
            cout<<-1<<endl;

    }
}
