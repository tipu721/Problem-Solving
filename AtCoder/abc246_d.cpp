#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n, a, b;
    cin >> n;

    a = pow(n,1*1.0/3);
    cout << a << endl;
    ll a1, b1;

        a1 = round(a), b1 = 0;
    cout << a1 << endl;
    ll ans = (a1*a1 + b1*b1) * (a1 + b1);
    //cout << a1 << " " << b1 <<endl;
   // cout << ans <<endl;
    while(a1 >= b1)
    {
        if(ans<=n)
            break;
        a1--, b1++;
        //cout << a1 <<" " << b1 << endl;
        ans = (a1*a1 + b1*b1) * (a1 + b1);

    }
    if(ans==n || n==0)
        cout << n <<endl;
    else
    {
        a1++, b1--;
        ans = (a1*a1 + b1*b1) * (a1 + b1);
        cout << ans <<endl;
    }
    main();


}
