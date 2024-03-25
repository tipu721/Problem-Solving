#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin>>s;
    int a,b;
    cin >> a >> b;
    swap(s[a-1],s[b-1]);
    cout<<s<<endl;


    return 0;
}

