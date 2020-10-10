#include<iostream>
#include<math.h>
using namespace std;
int zs(int i){
    for(int x=3;x<sqrt(i);x++){
        if(i%x==0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}
int main()
{
    int n;
    int z=2;
    cin>>n;
    if(n==1)
    {
        cout<<1;
    }
    else
    {
        if(n==2)
        {
            cout<<2;
        }
        else{
            for(int i=3;z<=n;i++)
            {
                if(zs(i)==1)
                {
                    z++;
                    if(z==n)
                    {
                        cout<<i;
                    }
                }
            }
        }
    }
}