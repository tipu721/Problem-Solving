#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testCase;
    cin>>testCase;
    for(int i=1; i<=testCase; i++)
    {
        vector<long long>v;
        int noOfElement,noOfOperation;
        cin>>noOfElement>>noOfOperation;
        for(int i=0; i<noOfElement; i++)
        {
            int a;
            cin>>a;
            v.push_back(a);
        }
        while(noOfOperation--)
        {
            char ch1, ch2, ch3;
            cin>>ch1;
            if(ch1=='S')
            {
                int d;
                cin>>d;
                for(int i=0; i<noOfElement; i++)
                    v[i]+=d;


            }
            else if(ch1=='M')
            {
                int d;
                cin>>d;
                for(int i=0; i<noOfElement; i++)
                    v[i]*=d;
            }
            else if(ch1=='D')
            {
                int d;
                cin>>d;
                for(int i=0; i<noOfElement; i++)
                    v[i]/=d;
            }
            else if(ch1=='P')
            {
                int d,e;
                cin>>d>>e;
                swap(v[d],v[e]);

            }
            else if(ch1=='R')
            {
                reverse(v.begin(),v.end());
            }

        }
        cout<<"Case "<<i<<":"<<endl;
        for(int i=0; i<noOfElement; i++)
                    cout<<v[i]<<" ";
            cout<<endl;
    }
}
