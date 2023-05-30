#include<stdio.h>
int main()
{
    int n,d,s=0,e;
    scanf("%d",&n);
    d=n*n;
    while(d>0)
    {
        e=d%10;
        d=d/10;
        s=s+e;
    }
    if(s==n)
    {
        printf("Neon Number");
    }
    else
    {
     printf("Not Neon Number");   
    }
}