#include<stdio.h>
int main()
{
    int l,u,i;
    scanf("%d%d",&l,&u);
    for(i=1;i<=u;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",l,i,l*i);
        }
    }
}