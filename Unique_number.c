#include<stdio.h>
int main()
{
    int n,rem,a[100],j,k,i,c=0,s=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        a[i]=rem;
        n=n/10;
        i++;
    }
    for(j=0;j<i;j++)
    {
        for(k=0;k<i;k++)
        {
            if(a[j]==a[k])
            {
                c++;
            }
        }
    }
    if(c==i)
    {
        printf("Unique Number");
    }
    else
    {
        printf("Not Unique Number");
    }
}