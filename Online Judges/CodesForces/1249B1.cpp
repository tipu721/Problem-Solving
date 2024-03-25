#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int arr[204],n;
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>arr[i];

        for(int i=1;i<=n;i++)
        {   int c=1;
            int a=arr[i];
            while(a!=i)
            {
                a=arr[a];
                c++;
            }
            cout<<c<<" ";
        }
        cout<<endl;
    }

}
