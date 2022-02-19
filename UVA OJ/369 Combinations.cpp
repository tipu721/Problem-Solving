#include<bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    if(n==0)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    long long n,m,c;
    cin>>n>>m;

  c=fact(n)/(fact(n-m)*fact(m));
  cout<<n<<" things taken "<<m<<" at a time is "<<c<<"  exactly.\n";
  main();
}
