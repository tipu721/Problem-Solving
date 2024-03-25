#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int d,k,x=0,y=0;
        cin>>d>>k;
        int i;
        for(i=1;;i++)
        {
            if(i%2==1)
                x+=k;
            else
                y+=k;
            if((x*x)+(y*y)>d*d)
                break;
        }
        if(i%2==0)
            cout<<"Ashish"<<endl;
        else
            cout<<"Utkarsh"<<endl;

    }
}
