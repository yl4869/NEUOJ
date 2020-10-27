#include<stdio.h>
int main()
{
    //freopen("in.txt","r",stdin);
    int n;
    scanf("%d",&n);
    int sum=0;
    int k=0;
    for(int i=1;i<=n;i++)
    {
        k=k*10+2;
        sum=sum+k;
    }
    printf("%d",sum);
    return 0;
}