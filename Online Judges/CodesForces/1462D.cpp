#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for( int i=0; i<n; i++)
            cin >> arr[i];
        int sum = 0;
        int ans = 1e5;
        for( int i=0; i<n; i++)
        {
            sum+=arr[i];
            bool pos = true;
            int here = 0;
            int j = 0;
            int temp = 0;
            int cnt = 0;
            while(j < n && pos)
            {
                while(j < n && sum > temp)
                {
                    temp += arr[j];
                    ++j;
                    ++cnt;

                }
                if( sum == temp)
                {
                    here += cnt - 1;
                    cnt = 0;
                    temp = 0;
                }
                else if( sum < temp || j >= n)
                {
                    pos = false;
                    break;
                }

            }
            if( pos )
                ans = min(ans, here);


        }
        cout<< ans << endl;
    }
}
