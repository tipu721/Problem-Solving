#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1,s2;
    cin>>s1>>s2;
    int carry=0;
    bool ans=false;
    if(s1.size()>=s2.size())
    {
        for(int i=s1.size()-1,j=s2.size()-1; j>=0; i--,j--)
        {
            carry=s1[i]-'0'+s2[j]-'0';
           // cout<<carry<<endl;
            if(carry>9)
                ans=true;
        }
    }
    else
    {
        for(int i=s2.size()-1,j=s1.size()-1; j>=0; i--,j--)
        {
            carry=s2[i]-'0'+s1[j]-'0';
            //cout<<carry<<endl;
            if(carry>9)
                ans=true;
        }
    }

    if(ans)
        cout<<"Hard"<<endl;
    else
        cout<<"Easy"<<endl;

    //main();

}
