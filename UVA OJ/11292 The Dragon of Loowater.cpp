#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[20005],arr2[20005],n,m;
    while(cin>>n>>m)
    {

        long long sum=0;
        if(n==0&&m==0)
            break;
        for(int i=0; i<n; i++)
            cin>>arr1[i];
        for(int j=0; j<m; j++)
            cin>>arr2[j];
        if(m<n)
            cout<<"Loowater is doomed!\n";
        else
        {
            int j=-1,c=0;
            sort(arr1,arr1+n);
            sort(arr2,arr2+m);
            for(int i=0; i<n; i++)
                for(j=j+1; j<m; j++)
                {
                    if(arr2[j]>=arr1[i])
                    {
                        c++;
                        sum+=arr2[j];
                        break;
                    }
                }
            if(c==n)
                cout<<sum<<endl;
            else
                cout<<"Loowater is doomed!\n";
        }
    }
    return 0;
}
