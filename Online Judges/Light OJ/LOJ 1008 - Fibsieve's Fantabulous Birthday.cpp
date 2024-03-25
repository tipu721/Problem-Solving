#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    int cases;
    cin>>cases;
    for(int i=1; i<=cases; i++)
    {
        ll seconds, root, lack, row, col;
        cin >> seconds;
        root = ceil(sqrt(seconds*1.0));
        lack = root * root - seconds;
        if(lack < root)
        {
            row = root;
            col = lack + 1;

        }
        else
        {
            col = root;
            row = seconds - (root -1 )*(root-1);
        }
       // cout<<root<<endl;
        if(root % 2 == 0)
        {
            //cout<<"ok"<<endl;
            swap(row,col);
        }
        cout<<"Case "<<i<<": "<<col<<" "<<row<<endl;
    }
}
