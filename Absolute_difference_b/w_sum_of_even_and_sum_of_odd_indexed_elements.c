#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n,s=0,p=0;
    scanf("%d",&n);
    int i,a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            s=s+a[i];
        }
        else
        {
            p=p+a[i];
        }
    }
    printf("%d",abs(p-s));
}