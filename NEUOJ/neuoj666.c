#include<stdio.h>
int x1(int a)
{
    int sum=0;
    for(int i=1;i<=a;i++)
    {
        sum+=i;
    }
    return sum;
}
int x2(int b)
{
    int sum=0;
    for(int i=1;i<=b;i++)
    {
        sum+=i*i;
    }
    return sum;
}
double x3(int c)
{
    double sum=0;
    for(int i=1;i<=c;i++)
    {
        sum+=1.0/i;
    }
    return sum;
}
int main()
{
    //freopen("in.txt","r",stdin);
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    printf("%.2f",x1(a)+x2(b)+x3(c));
    return 0;
}