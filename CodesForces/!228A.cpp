#include<bits/stdc++.h>
using namespace std;
int main()
{
    int l,x,r,i;
    cin>>l>>r;
    for( i=l; i<=r; i++)
    {
        int n=i;
        vector<int>vec;
        while(n!=0)
        {
            int d=n%10;
            vec.push_back(d);
            n/=10;
        }
        sort(vec.begin(),vec.end());
        int f=0;
        for(int i=0; i<vec.size()-1; i++)
        {
            if(vec[i]==vec[i+1])
            {
                f=1;
                break;
            }

        }
        if(f==0)
        {
            cout<<i<<endl;
            break;
        }

    }
    if(i>r)
        cout<<-1<<endl;
    //main();
}
