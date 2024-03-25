#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char ar[10][10];
        for(int i=1; i<=9; i++)
        {
            for(int j=1; j<=9; j++)
            {
                cin>>ar[i][j];
            }
        }
        ar[1][1]=ar[1][2];
        ar[2][4]=ar[2][5];
        ar[3][7]=ar[3][8];
        ar[4][2]=ar[4][3];
        ar[5][5]=ar[5][6];
        ar[6][8]=ar[6][9];
        ar[7][3]=ar[7][4];
        ar[8][6]=ar[8][9];
        ar[9][9]=ar[9][8];

        for(int i=1; i<=9; i++)
        {
            for(int j=1; j<=9; j++)
            {
                cout<<ar[i][j];
            }
            cout<<endl;
        }

    }

}



