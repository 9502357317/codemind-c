#include<stdio.h>
int main()
{
    int n,i,m=0,l=0,k,a,b,s=0;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",&ar[i]);
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        if(ar[i]<a || ar[i]>b)
        {
            s=s+ar[i];
        }
    }
    printf("%d",s);
}