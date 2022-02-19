#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    vector<int>vec;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>m;
        vec.push_back(m);
    }
    int x,a,b;
    cin>>x>>a>>b;
    vec.erase(vec.begin()+x-1);
    vec.erase(vec.begin()+a-1,vec.begin()+b-1);
    cout<<vec.size()<<endl;
    for(int i=0; i<vec.size(); i++)
    {
        cout<<vec[i];
        if(i!=vec.size()-1)
            cout<<' ';
        else
            cout<<endl;
    }
    return 0;
}
