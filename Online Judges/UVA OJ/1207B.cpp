#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[555][555],r,c;
    cin>>r>>c;
    for(int i=0; i<r; i++)
        for(int j=0; j<c; j++)
            cin>>arr[i][j];
    int rr[55555],cc[55555],ri=0,ci=0;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if((arr[i][j]==1||arr[i][j]==2)&&(arr[i][j+1]==1||arr[i][j+1]==2)&&(arr[i+1][j]==1||arr[i+1][j]==2)&&(arr[i+1][j+1]==1||arr[i+1][j+1]==2))
            {
                rr[ri++]=i+1;
                cc[ci++]=j+1;
                arr[i][j]=2;
                arr[i][j+1]=2;
                arr[i+1][j]=2;
                arr[i+1][j+1]=2;
            }
        }
    }
    int f=1;
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(arr[i][j]==1)
            {
                f=0;
                break;
            }

        }

    }
    if(f==0)
            cout<<-1<<endl;
    else
    {
        cout<<ri<<endl;
        for(int i=0; i<ri; i++)
        {
            cout<<rr[i]<<" "<<cc[i]<<endl;
        }
    }
    main();
}
