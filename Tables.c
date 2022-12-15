#include<stdio.h>
int main()
{
    int n,b,i,m;
    scanf("%d%d",&b,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        { 
            m=b*i;
            printf("%d x %d = %d
",b,i,m);
        }
     }
    
}