#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        int c=97,c2=0;
        cin>>n>>a>>b;

        for(int i=0;i<n;i++)
        {
            if(c2==b)
            {
               c2=0;
                c=97;

            }


                printf("%c",c);
                c++;
                c2++;

        }
        cout<<endl;
    }

}
