#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,arr[6];
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int j,c1=0,c2=0;
        for(j=0; j<5; j++)
        {
            cin>>arr[j];
            if(arr[j]==j+1)
                c1++;
            else if(arr[j]==j+2)
                c2++;
            }
        if(c1==5||c2==5)
            cout<<"Y\n";
        else
            cout<<"N\n";
    }
    return 0;
}
