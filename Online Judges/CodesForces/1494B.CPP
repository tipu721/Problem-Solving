#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n,U,R,D,L;
        cin>>n>>U>>R>>D>>L;
        int u=U,r=R,d=D,l=L;
        if(U==0)
        {
            L--;
            R--;
        }
        else if(U==1)
        {
            if(L<R)
                R--;
            else
                L--;

        }
        if(D==0)
        {
            L--;
            R--;
        }
        else if(D==1)
        {
            if(L<R)
                R--;
            else
                L--;

        }
        if(R==n)
        {
            U++;
            D++;
        }
        else if(R==n-1)
        {
            if(U<D)
                U++;
            else
                D++;
        }
        if(L==n)
        {
            U++;
            D++;
        }
        else if(L==n-1)
        {
            if(U<D)
                U++;
            else
                D++;
        }
        if(U>n || D>n || L>n || R>n)
            cout<<"NO"<<endl;
        else if(U>u || D>d || l<L || r<R)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }

}

