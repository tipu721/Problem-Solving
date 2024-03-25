#include<bits/stdc++.h>
using namespace std;
int arr[2000005];
int main()
{
    int s;
    for(int i=1; i<10001; i++)
    {
        cin>>s;
        for(int i=2; i<=sqrt(20000000); i++)
        {
            if(arr[i]==0)
            {
                for(int j=2; j*j<=1000000; j++)
                    arr[i*j]=1;

            }
        }
        int c=0;
        for(int i=2; i<=1000000-2; i++)
        {

            if(arr[i]==0&&arr[i+2]==0)
            {
                c++;
                if(c==s)
                    cout<<"("<<i<<","<<i+2<<")"<<endl;
            }
        }
    }
    return  0;
}
