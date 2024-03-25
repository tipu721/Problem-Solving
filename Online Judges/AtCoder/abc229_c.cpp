#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
struct cheese
{
    ll we;
    ll no;
};
bool cmp (cheese c1, cheese c2)
{
    if(c1.we>c2.we)
        return true;
    return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,w;
    cin>>n>>w;
    cheese ch[n+5];
    for(int i=0; i< n; i++)
    {
        cin>>ch[i].we;
        cin>>ch[i].no;
    }
    sort(ch,ch+n,cmp);
    ll ans=0;
    for(int i=0; i<n; i++)
    {
        if(ch[i].no<w)
        {
            ans+=ch[i].we*ch[i].no;
            w-=ch[i].no;
        }
        else
        {
            ans+=ch[i].we*w;
            break;

        }
    }
    cout<<ans<<endl;
    //main();


}

