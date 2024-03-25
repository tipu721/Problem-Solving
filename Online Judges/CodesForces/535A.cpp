#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,c=0;
    cin>>l;
    for(int i=1;i<l;i++)
    {
        if((l-i)%i==0)
            c++;
    }
    cout<<c<<endl;
    //main();
}
