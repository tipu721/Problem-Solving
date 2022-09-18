#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
string sentences[105];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<char>mat[101];
    int pos =0;
    int longest=0;
    while(getline(cin,sentences[pos]))
    {
        if(sentences[pos].size()>longest)
        {
            longest=sentences[pos].size();

        }
        pos++;
    }
    for(int j=0; j<longest; j++)
    {
        for(int i=pos-1; i>=0; i--)
        {
            if(sentences[i].size()>j)
                cout<<sentences[i][j];
            else
                cout<<' ';
        }
        cout<<'\n';
    }

}


