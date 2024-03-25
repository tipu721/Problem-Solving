#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        cin>>a;
        if(a==1)
            cout<<-1<<endl;
        else
        {
            for(int i=1;i<a;i++)
                cout<<3;
            cout<<4<<endl;
        }
    }
}
