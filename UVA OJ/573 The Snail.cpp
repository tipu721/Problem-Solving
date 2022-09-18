#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    double height, up, down, fall;
    while(cin>>height>>up>>down>>fall && height)
    {
        double currentPosition = 0;
        int day=1;
        fall = up * fall/100;
        while(currentPosition < height && currentPosition>=0)
        {
            currentPosition += up;
            if(up > 0)
                up -= fall;
            if(currentPosition > height)
                break;
            currentPosition -= down;
            if(currentPosition < 0)
                break;
            day++;
        }
        if(currentPosition < 0)
            cout<<"failure on day "<<day<<endl;
        else
            cout<<"success on day "<<day<<endl;
    }
    return 0;
}
