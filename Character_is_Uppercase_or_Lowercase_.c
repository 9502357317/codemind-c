#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a>='A'&&a<='Z')
    {
        printf("uppercase alphabet");
    }
    else if(a>='a'&&a<='z')
    {
        printf("lowercase alphabet");
    }
    else
    {
        printf("not an alphabet");
    }
}