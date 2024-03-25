#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>vec;
    int n,a;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    sort(vec.begin(),vec.end());
    for(int i=0; i<n; i++)
    {
        cout<<vec[i];
        if(i==n-1)
            cout<<endl;
        else
            cout<<" ";
    }
    return 0;

}
