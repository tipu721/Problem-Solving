#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h1,m1,h2,m2;
    while(1)
    {
        cin >> h1 >> m1 >> h2 >> m2;
        if(h1+m1+h2+m2 == 0)
            break;
        int t1 = h1*60 + m1;
        int t2 = h2*60 + m2;
        if(t1 > t2)
            t2+=60*24;
        cout<<t2-t1<<endl;
    }
}
