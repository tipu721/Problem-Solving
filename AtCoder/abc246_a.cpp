#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    if(x1 != x2 && x1 != x3)
        cout << x1 << " ";
    else if(x2 != x1 && x2 != x3)
        cout << x2 << " ";
    else
        cout << x3 << " ";

    if(y1 != y2 && y1 != y3)
        cout << y1 << endl;
    else if(y2 != y1 && y2 != y3)
        cout << y2 << endl;
    else
        cout << y3 << endl;

   // main();



}

