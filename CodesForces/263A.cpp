#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[6][6];
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
        cin>>arr[i][j];
    for(int i=1;i<=5;i++)
        for(int j=1;j<=5;j++)
        {
            if(arr[i][j]==1)
            {
                int ans=abs(i-3)+abs(j-3);
                cout<<ans<<endl;
                //main();
                return 0;
            }
        }
}
