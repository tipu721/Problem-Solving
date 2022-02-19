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
leve:
    while(t--)
    {
        int a,b;
        string s;
        cin>>a>>b;
        cin>>s;
        int l=0,r=s.size()-1;
        while(l<r)
        {

            if(s[l] != s[r])
            {
                if((s[l]=='0' && s[r] == '1') || (s[l] == '1' && s[r] == '0'))
                {
                    cout<<-1<<endl;
                    goto level;
                }
                else if(a>=2 && s[l]=='0')
                {
                    s[r] = '0';
                    a-=2;
                    l++;
                    r--;
                }
                else if(a>=2 && s[r] == '0')
                {
                    s[l] = '0';
                    a-=2;
                    l++;
                    r--;

                }
                else if(b>=2 && s[l]=='1')
                {
                    s[r] = '1';
                    b-=2;
                    l++;
                    r--;
                }
                else if(b>=2 && s[r] == '1')
                {
                    s[l] = '1';
                    b-=2;
                    l++;
                    r--;

                }

            }
            else if(a>=2 && s[l]=='0')
            {
                a-=2;
                l++;
                r--;
            }
            else if(b>=2 && s[l]=='1')
            {
                b-=2;
                l++;
                r--;
            }


        }
    }

}

