#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb   push_back;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string s1=s;
        int f=0;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i] != s[i+1])
            {
                f=1;
                break;
            }
        }
        if(f)
        {
            cout<<"YES"<<endl;
            int l=0,r=s.size()-1;
            int c=0;
            while(l<r)
            {
                if(s[r]!='a')
                {
                    s.insert(l,"a");
                    break;
                }
                else if(s[l] != 'a')
                {
                    s.insert(r,"a");
                    break;
                }
                l++;
                r--;
            }
            cout<<s<<endl;
        }
        else if(s.size()==1 && s[0]!='a')
        {
            cout<<"YES"<<endl;
            cout<<'a'<<s[0]<<endl;
        }
        else
            cout<<"NO"<<endl;

    }

}

