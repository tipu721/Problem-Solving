#include<bits/stdc++.h>
int arr[200005],brr[200005];
using namespace std;
int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {

        vector<int>v;
        int n;
        cin>>n;
        int mx=0;
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
            mx=max(mx,arr[i]);
            brr[i]=arr[i];
        }
        int l1,l2,f=1;
        l1=mx;
        l2=n-mx;
        sort(arr,arr+l1);
        for(int i=0; i<l1; i++)
        {
            if(i+1!=arr[i])
            {
                f=0;
                break;
            }
        }
        sort(arr+l1,arr+n);
        for(int i=l1,j=1; i<n; i++,j++)
        {
            if(j!=arr[i])
            {
                f=0;
                break;
            }
        }
        int f1=1;
        sort(brr,brr+l2);
        for(int i=0; i<l2; i++)
        {
            if(i+1!=brr[i])
            {
                f1=0;
                break;
            }
        }
        sort(brr+l2,brr+n);
        for(int i=l2,j=1; i<n; i++,j++)
        {
            if(j!=brr[i])
            {
                f1=0;
                break;
            }
        }
        if(f&&f1&&l1!=0&&l2!=0&&l1!=l2)
        {
            cout<<2<<endl;
            cout<<l1<<" "<<l2<<endl;
            cout<<l2<<" "<<l1<<endl;
        }
        else if(l1!=0&&l2!=0&&f)
        {
            cout<<1<<endl;
            cout<<l1<<" "<<l2<<endl;
        }
        else if(l1!=0&&l2!=0&&f1)
        {
            cout<<1<<endl;
            cout<<l2<<" "<<l1<<endl;
        }
        else
            cout<<0<<endl;

    }
}
