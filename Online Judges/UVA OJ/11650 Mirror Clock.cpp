#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int hr,mn;
        char s;
        cin>>hr>>s>>mn;
        mn = (60-mn)%60;
        hr = 12 - hr;
        if(mn != 0)
            --hr;
        hr = (hr + 12) % 12;
        if(hr == 0)
            hr = 12;
        printf("%02d:%02d\n",hr, mn);
    }
}
