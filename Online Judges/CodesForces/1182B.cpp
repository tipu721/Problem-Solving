#include<bits/stdc++.h>
using namespace std;
int main()
{
    int h,w;
    char ch[505][505];
    cin>>h>>w;
    int f3=0;
    for(int i=0; i<h; i++)
    {
        for(int j=0; j<w; j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='*')
                f3=1;
        }
    }
    int f=0;
    for(int i=0; i<h; i++)
    {

        for(int j=0; j<w; j++)
        {
            if(ch[i][j]=='*'&&ch[i][j+1]=='*'&&ch[i][j-1]=='*'&&ch[i-1][j]=='*'&&ch[i+1][j]=='*')
            {
                f=1;
                ch[i][j]='.';
                for(int k=j+1; k<w; k++)
                {
                    if(ch[i][k]=='*')
                    {
                         ch[i][k]='.';
                    }
                    else
                        break;
                }
               // cout<<f+1<<endl;
                for(int k=j-1; k>=0; k--)
                {
                    if(ch[i][k]=='*')
                    {

                        ch[i][k]='.';
                    }
                    else
                        break;
                }
                //cout<<f+2<<endl;
                for(int k=i+1; k<h; k++)
                {
                    if(ch[k][j]=='*')
                    {

                        ch[k][j]='.';
                        //break;
                    }
                    else
                        break;
                }
                for(int k=i-1; k>=0; k--)
                {
                    if(ch[k][j]=='*')
                    {
                        ch[k][j]='.';
                        //break;
                    }
                    else
                        break;
                }
                //cout<<f+4<<endl;
            }
            if(f==1)
                break;
        }
        if(f==1)
            break;
    }
    //cout<<f<<endl;
    int f2=0;
    for(int i=0;i<h;i++)
    {
        for(int j=0;j<w;j++)
        {

            if(ch[i][j]=='*')
            {
                f2=1;
                break;
            }
        }
        //cout<<endl;
    }
    //cout<<f3<<endl;
    if(f2==1||f3==0)
        cout<<"NO\n";
    else
        cout<<"YES\n";
   // main();
}
