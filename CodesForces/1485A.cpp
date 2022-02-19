#include <bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int temp2 = a;
        int temp = b;
        int ans = 1e9;
        for (int i = 0; i < 32; ++i)
        {
            int cnt = i;
            b = temp + i;
            a = temp2;
            if (b == 1)
            {
                ++b;
                cnt = 1;
            }
            while (a)
            {
                ++cnt;
                a /= b;
            }
            ans = min(ans, cnt);
        }
        cout << ans << endl;
    }
}
