#include<stdio.h>
int main()
{
    freopen("in.txt","r",stdin);
    int n;
    int sum=1;
    scanf("%d",&n);
    while(n/10!=0)
    {
          sum++;
          n=n/10;
    }
    printf("%d\n",sum);
}