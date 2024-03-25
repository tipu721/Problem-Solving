#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,as=0,bs=0,at=0,bt=0;
    string s,t;
    cin>>n>>s>>t;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='a')
            as++;
        if(t[i]=='a')
            at++;
    }
    if(as!=at)
        cout<<-1<<endl;
    else
    {
        vector<int>vec1;
        vector<int>vec2;
        vector<int>vec3;
        vector<int>vec4;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='a'&&t[i]=='b')
            {
                vec1.push_back(i+1);
                vec2.push_back(i+1);

            }
            if(s[i]=='b'&&t[i]=='a')
            {
                vec3.push_back(i+1);
                vec4.push_back(i+1);


            }
        }
        cout<<vec1.size()*2<<endl;
        for(int j=0;j<vec1.size();j++)
        {
            cout<<vec1[j]<<" "<<vec3[j]<<endl<<vec2[j]<<" "<<vec4[j]<<endl;
        }
    }
    main();

}
