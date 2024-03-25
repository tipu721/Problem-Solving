#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x>45)
        {
            cout<<-1<<endl;
            continue;
        }
        if(x==45)
        {
            for(int i=1;i<=9;i++)
                cout<<i;
            cout<<endl;
            continue;
        }
        string s;
        int sum=0,d=9;
        while(1)
        {
            if(sum+d<=x)
            {
                s+=(d+'0');
                sum+=d;
                d--;
            }
            else
                break;

        }
        if(sum-x==0)
        {
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
        else if(x-sum<d)
        {
            s+=((x-sum)+'0');
            reverse(s.begin(),s.end());
            cout<<s<<endl;
        }
        else
            cout<<-1<<endl;
    }
}
