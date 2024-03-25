#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,a,b,c;
    map<char,int>mymap;
    map<char,int>::iterator it;
    char ch;
    cin>>t;
    while(t--)
    {
        double sum=0;
        cin>>a;
       while(a--)
        {
            cin>>ch>>b;
            mymap[ch]=b;
        }
        int c;
        string s;
        cin>>c;
        getchar();
        while(c--)
        {
            getline(cin,s);
            for(int i=0;i<s.size();i++)
            {
                it=mymap.find(s[i]);
                if(it!=mymap.end())
                    sum+=it->second;
            }
        }
        sum/=100;
        printf("%.2f$\n",sum);
        mymap.clear();
    }
    return 0;
}
