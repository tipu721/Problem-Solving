#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string s;
        char ar[105][105];
        getline(cin,s);
        int rt=sqrt(s.size());
        if(rt*rt!=s.size())
        {
            cout<<"INVALID"<<endl;
            continue;
        }
        int pos=0;

        for(int i=1; i<=rt; i++)
        {
            for(int j=1; j<=rt; j++)
            {
                ar[i][j]=s[pos++];
                //cout<<ar[i][j];

            }
        }
        for(int i=1; i<=rt; i++)
        {
            for(int j=1; j<=rt; j++)
                cout<<ar[j][i];
        }
        cout<<endl;
    }
}
