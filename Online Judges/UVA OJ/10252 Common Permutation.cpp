#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1, s2;
    while(getline(cin,s1)&& getline(cin,s2))
    {
        map<char,int>mp1;
        map<char,int>mp2;
        for(int i=0; i<s1.size();i++)
        {
            mp1[s1[i]]++;
        }
        for(int i=0; i<s2.size(); i++)
        {
            mp2[s2[i]]++;
        }
        for(char i='a'; i<='z'; i++)
        {
            for(int j=1; j<=min(mp1[i],mp2[i]); j++)
                cout<<i;
        }
        cout<<endl;
    }
}
