#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int T;
    cin >> T;

    for (int i = 1; i <= T; ++i)
    {
        double temp, tempChange;

        cin >> temp >> tempChange;

        temp = temp + 5.0 / 9.0 * tempChange;

        printf("Case %d: %.2f\n", i, temp);
    }
}
