#include<stdio.h>
int main(){
    //freopen("in.txt","r",stdin);
    int x;
    scanf("%d",&x);
    if(x<1){
        printf("%d",x);
    }
    if(1<=x&&x<10){
        printf("%d",2*x-1);
    }
    if(x>=10){
        printf("%d",3*x-11);
    }
}