#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n)
    {
        if(n==0)
            break;
        priority_queue<int>pq;
        for(int i=0; i<n; i++)
        {
            int a;
            cin>>a;
            pq.push(-a);
        }
        int sum=0;
        while(pq.size()>1)
        {
            int b=-pq.top();
            pq.pop();
            int c=-pq.top();
            pq.pop();
            int d=b+c;
            sum+=d;
            pq.push(-d);
        }
        cout<<sum<<endl;
    }
    return 0;
}
