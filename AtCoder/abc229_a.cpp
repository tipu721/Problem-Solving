#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char ch[2][2];
    int cnt=0;
    for(int i=0; i<2; i++)
    {
        for(int j=0; j<2; j++)
        {
            cin>>ch[i][j];
            if(ch[i][j]=='.')
                cnt++;
        }
    }
    bool ans=true;
    if(cnt==2)
    {
        if(ch[0][0]=='.' && ch[1][1]=='.')
            ans=false;
        else if(ch[0][1]=='.' && ch[1][0]=='.')
            ans=false;
    }
    if(ans)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

   // main();


}
