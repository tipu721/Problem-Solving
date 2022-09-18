#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t,cnt,numPieces;
    string s;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        cnt=numPieces=0;
        getline(cin,s );
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='M')
                cnt++;
            else if(s[i]=='F')
                cnt--;
        }
        if(cnt==0 && s.size()>3)
            cout<<"LOOP"<<endl;
        else
            cout<<"NO LOOP"<<endl;
    }

}


