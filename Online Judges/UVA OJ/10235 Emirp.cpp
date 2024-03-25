#include<stdio.h>
#include<math.h>
int rev(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev=rev*10+n%10;
        n/=10;
    }
    return rev;
}
int prime(int n)
{
    if(n==1)
        return 0;
    for(int i=2; i<=sqrt(n); i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int n;
    while(scanf("%d",&n)!=EOF)
    {
        if(prime(n)==0)
            printf("%d is not prime.\n",n);
        else if(prime(n)==1&&prime(rev(n))==0||prime(n)==1&&prime(rev(n))==1&&rev(n)==n)
            printf("%d is prime.\n",n);
        else if(prime(n)==1&&prime(rev(n))==1)
            printf("%d is emirp.\n",n);

    }
    return 0;

}
