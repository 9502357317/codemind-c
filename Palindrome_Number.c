#include<stdio.h>
int main()
{
    int x,j;
    scanf("%d",&x);
    for(j=1;j<=x;j++)
    {
        int n,rev=0,rem,x;
        scanf("%d",&n);
        x=n;
        while(n!=0)
        {
            rem=n%10;
            rev=rev*10+rem;
            n=n/10;
        }
        if(x==rev)
        {
            printf("True
");
        }
        else
        {
            printf("False
");
        }
    }
}