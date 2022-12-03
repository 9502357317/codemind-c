#include<stdio.h>
int main()
{
    char color;
    scanf("%c",&color);
    if(color=='V')
    {
        printf("Violet");
    }
    else if(color=='I')
    {
        printf("Indigo");
    }
    else if(color=='B')
    {
        printf("Blue");
    }
    else if(color=='G')
    {
        printf("Green");
    }
    else if(color=='Y')
    {
        printf("Yellow");
    }
    else if(color=='o')
    {
        printf("Orange");
    }
    else if(color=='R')
    {
        printf("Red");
    }
    else
    {
        printf("-1");
    }
}