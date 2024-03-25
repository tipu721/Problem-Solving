#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double a, b, d, x, y;
    cin >> a >> b;
    d = sqrt(a*a + b*b);
    x = a*1.0/d;
    y = b*1.0/d;
    cout << setprecision(12) << x << " " << y << endl;
   // main();


}

