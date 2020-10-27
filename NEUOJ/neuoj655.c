#include<stdio.h>
int main(){
    //freopen("in.txt","r",stdin);
    const float PI=3.14;
    float r,h;
    float Sa,Sb,Va,Vb;
    scanf("%f%f",&r,&h);
    printf("C1=%.2f\n",2*PI*r);
    printf("Sa=%.2f\n",PI*r*r);
    printf("Sb=%.2f\n",4*PI*r*r);
    printf("Va=%.2f\n",4.0/3*PI*r*r*r);
    printf("Vb=%.2f\n",PI*r*r*h);
}