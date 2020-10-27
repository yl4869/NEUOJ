#include<stdio.h>
int main()
{
    //freopen("in.txt","r",stdin);
    long long  n;
    long long x;
    long long sum=0;
    scanf("%lld",&n);
    for(int i=1;i<=n;i++)
    {
        x=1;
        for(int j=1;j<=i;j++)
        {
            x=x*j;
        }
        sum=sum+x;
    }
    printf("%lld",sum);
}