#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        int c=0;
        int parent,chaild;
        for(int i=1; i<=n-1; i++)
        {
            cin>>parent>>chaild;

            if(parent==s || chaild==s)
                c++;
        }
        if(c<=1)
            cout<<"Ayush"<<endl;
        else
        {
            if((n-1)%2==0)
                cout<<"Ashish"<<endl;
            else
                cout<<"Ayush"<<endl;
        }
    }
  //  main();

}
