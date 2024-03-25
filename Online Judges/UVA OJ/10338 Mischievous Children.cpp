#include<bits/stdc++.h>
using namespace std;
long long fact(int a)
{
    long long f=1;
    for(int i=1; i<=a; i++)
        f=f*i;
    return f;
}
int main()
{
    int t;
    string s;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>s;
        int arr[150]={0};
        //cout<<arr[5]<<endl<<arr[7]<<endl;
        for(int i=0; i<s.size(); i++)
            arr[s[i]]++;
        long long ans=fact(s.size());
        //cout<<ans<<endl;
        for(int i='A'; i<='Z'; i++)
        {
            if(arr[i]>1)
            {
                //cout<<i<<endl<<arr[i]<<endl;
                ans=ans/fact(arr[i]);
            }
        }
        printf("Data set %d: %lld\n",i,ans);

    }
    return 0;

}
