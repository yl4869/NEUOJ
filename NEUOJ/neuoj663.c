#include<stdio.h>
#include<string.h>
int main()
{
    int num1=0;
    int num2=0;
    int num3=0;
    int num4=0;
    //freopen("in.txt","r",stdin);
    char c[100];
    gets(c);
    for(int i=0;(c[i]!='\0');i++)
    {
        if((65<=c[i]&&c[i]<=90)||97<=c[i]&&c[i]<=122)
        {
            num1++;
        }
        else
        {
            if(c[i]==32)
            {
                num2++;
            }
            else
            {
                if(48<=c[i]&&c[i]<=57)
                {
                    num3++;
                }
                else{
                    num4++;
                }
            }
        }
    }
    printf("%d %d %d %d ",num1,num3,num2,num4);
}