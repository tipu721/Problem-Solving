#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        int n;
        cin>>n;
        int one=0;
        for(int j=0; j<=31; j++)
        {
            if(n & (1 << j))
            {
                one++;
            }
        }
        cout << "Case " << i << ": " << (one & 1 ? "odd" : "even") << "\n";


    }
}
