#include<stdio.h>
int main()
{
    int n,m,i,j,sum=0;
    scanf("%d%d",&n,&m);
    int ar[n][m];
    for (i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i==0||j==0||i==n-1||j==n-1)
            {
                sum=sum+ar[i][j];
            }
        }
    }
    printf("%d",sum);
}