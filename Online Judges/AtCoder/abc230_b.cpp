#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int f=0;
    f=1;
    int pos=0;
    int srt=0;
    if(s[0]=='o'&& s[1]=='x' && s[2]=='x')
    {
        srt=3;
        pos=3;
    }
    else if((s[0]=='x' && s[1])=='x')
    {
        srt=2;
        pos=2;
    }
    else if((s[0]=='o' && s[1])=='x')
    {
        srt=2;
        pos=2;
    }
    else if(s[0]=='x'||s[0]=='o')
    {
        srt=1;
        pos=1;
    }
    else
        f=0;

   // cout<<f<<endl;
    if(f)
    {
        // string s2;
        for(int i=srt+2; i<s.size(); i+=3)
        {
            string s2;
            s2+=s[i-2];
            s2+=s[i-1];
            s2+=s[i];
            //  cout<<s2<<endl;
            if(s2!="oxx")
            {

                f=0;
                // cout<<i<<endl;
                break;
            }
            else
                pos=i;
        }
    }
    //cout<<f<<endl;
    //cout<<pos<<endl;

    if(f)
    {

        if((s.size()-pos)==1)
        {

            f=1;

        }
        else if((s.size()-pos)==2)
        {
            if(s[pos + 1]=='o' && s[pos + 2]=='x')
                f=1;
            else if(s[pos + 1]=='x' && s[pos + 2]=='x')
                f=1;
            else
                f=0;
        }
        //cout<<f<<endl
    }

  //  cout<<f<<endl;
    if(f)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;



    //main();

}

