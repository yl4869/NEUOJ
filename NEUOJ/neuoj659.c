#include<stdio.h>
int main(){
    freopen("in.txt","r",stdin);
    int n;
    scanf("%d",&n);
    if(n<60)
    {
        printf("E");
    }
    if(60<=n&&n<=69)
    {
        printf("D");
    }
    if(70<=n&&n<=79)
    {
        printf("C");
    }
    if(80<=n&&n<=89)
    {
        printf("B");
    }
    if(90<=n)
    {
        printf("A");
    }
}