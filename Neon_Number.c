
#include<stdio.h>
int main()
{
    int a,r,s=0,m;
    scanf("%d",&a);
    m=a*a;
    while(m!=0)
    {
        r=m%10;
        s=s+r;
        m=m/10;
    }
    if(s==a)
    {
        printf("Neon Number");
    }
    else
    {
         printf("Not Neon Number");
    }
}
