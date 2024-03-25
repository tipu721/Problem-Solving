#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2,s3,s4;
    cin>>s1>>s2;
    int f=0;
    if(s1.size()>s2.size())
    {
        f=0;
        for(int i=0; i<s2.size(); i++)
        {
            if(s2[i]>='a'&&s2[i]<='z')
            {
                if(s1[i]>s2[i])
                {
                    f=1;
                    cout<<">"<<endl;
                    break;
                }
                else if(s1[i]<s2[i])
                {
                    f=1;
                    cout<<"<"<<endl;
                    break;

                }
            }

        }
        if(f==0)
            cout<<">"<<endl;
    }

    else if(s1.size()<s2.size())
    {
        f=0;
        for(int i=0; i<s1.size(); i++)
        {
            if(s1[i]>='a'&&s1[i]<='z')
            {
                if(s1[i]>s2[i])
                {
                    f=1;
                    cout<<">"<<endl;
                    break;
                }
                else if(s1[i]<s2[i])
                {
                    f=1;
                    cout<<"<"<<endl;
                    break;

                }
            }
        }
        if(f==0)
            cout<<"<"<<endl;
    }
    else
    {
        f=0;
        for(int i=0; i<s1.size(); i++)
        {

            if(s1[i]>s2[i])
            {
                f=1;
                cout<<">"<<endl;
                break;
            }
            else if(s1[i]<s2[i])
            {
                f=1;
                cout<<"<"<<endl;
                break;
            }





        }
        if(f==0)
            cout<<"="<<endl;

    }
    main();
}
