#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define pb push_back
void dfs(int x,int y,vector<vector<int>> &a,int &c,int n,int m)
{

    a[x][y]=2;

    if(x+1<n)

    {

        if(a[x+1][y]==1)

        {

            c++;

            dfs(x+1,y,a,c,n,m);

        }

    }

    if(x-1>=0)

    {

        if(a[x-1][y]==1)

        {

            c++;

            dfs(x-1,y,a,c,n,m);

        }

    }

    if(y+1<m)

    {

        if(a[x][y+1]==1)

        {

            c++;

            dfs(x,y+1,a,c,n,m);

        }

    }

    if(y-1>=0)

    {

        if(a[x][y-1]==1)

        {

            c++;

            dfs(x,y-1,a,c,n,m);

        }

    }

}

int main()
{




    ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    int t;

    cin>>t;

    while(t--)
    {

        int n,m;

        cin>>n>>m;

        vector<vector<int>> a(n,vector<int> (m));

        for(int i=0; i<n; i++)

        {

            for(int j=0; j<m; j++)

            {

                char c;

                cin>>c;

                if(c=='#')

                {

                    a[i][j]=0;

                }

                else

                {

                    a[i][j]=1;

                }

            }

        }



        vector<int> ans;

        for(int i=0; i<n; i++)

        {

            for(int j=0; j<m; j++)

            {
                int count=1;

                if(a[i][j]==1)

                {
                    dfs(i,j,a,count,n,m);

                    ans.push_back(count);

                }



            }




        }

        cout<<ans.size()<<'\n';

        for(int i=0; i<ans.size(); i++)

        {

            cout<<ans[i]<<' ';

            if(i==ans.size()-1)

                cout<<'\n';

        }




    }

}
