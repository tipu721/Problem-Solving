#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0;
    while(t--)
    {
        c++;
        //cout<<c<<endl<<endl;
        int n,w3=0,w5=0,w7=0;
        cin>>n;
        if(n%3==0)
        {
            w7=0;
            w3=n/3;
            w5=0;
            cout<<w3<<" "<<w5<<" "<<w7<<endl;

        }
        else if(n>=5&&(n-5)%3==0)
        {

                w7=0;
                w3=(n-3)/3;
                w5=1;
           cout<<w3<<" "<<w5<<" "<<w7<<endl;

        }
        else if(n>=7&&(n-7)%3==0)
        {
            w7=1;
            w3=(n-7)/3;
            w5=0;
            cout<<w3<<" "<<w5<<" "<<w7<<endl;
        }
        else
            cout<<-1<<endl;



    }
}
