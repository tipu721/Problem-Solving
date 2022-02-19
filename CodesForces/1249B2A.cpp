#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define pb   push_back;
const int N=2e5+1000;
vector <int> v[N], vi;
bool vis[N];
int brr[N];
int ans = 0;
void dfs(int x)
{
    vis[x] = true;
    vi.push_back( x );
    ans++;
    for( int i=0; i<v[x].size(); i++)
    {
        if(!vis[v[x][i]])
        {
            dfs(v[x][i]);
        }
    }
    for(int i=0; i<vi.size(); i++)
        brr[vi[i]] = ans;
    vi.clear();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n+1];
        for(int i=1; i<=n; i++)
        {
            vis[i] = false;
            brr[i] = 0;
        }
        for(int i=0; i<=n+10; i++)

    }

}


