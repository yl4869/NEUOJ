#include<stdio.h>
int x(int k)
{
    return k*k*k;
}
int main()
{
    for(int i=100;i<=999;i++)
    {
        if(i==x(i/100)+x(i/10-i/100*10)+x(i%10))
        {
            printf("%d\n",i);
        }
    }
}