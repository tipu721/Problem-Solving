#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    if((int)a%5==0&&(a+.5)<=b)
        printf("%.2f\n",b-a-.5);
    else
        printf("%.2f\n",b);
   // main();
}
