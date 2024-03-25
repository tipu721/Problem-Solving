#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,arr[200]={0};
    string s;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>s;
        //cout<<s[0]<<endl;
        arr[s[0]]++;
        //cout<<arr[s[0]]<<endl;

    }
    long long s1=0;
    for(int i=65;i<=130;i++)
    {
        int hf=arr[i]/2;
        int rem=arr[i]-hf;
        int  ans=((hf*(hf-1))/2)+((rem*(rem-1))/2);
        s1+=ans;
    }
    cout<<s1<<endl;
    main();
}
