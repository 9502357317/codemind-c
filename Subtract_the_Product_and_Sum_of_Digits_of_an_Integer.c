#include<stdio.h>
int main()
{
    int pro=1,sum=0,rem,n;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
    }
    printf("%d",(pro-sum));
}