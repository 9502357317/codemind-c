#include<stdio.h>
int main()
{
    char x,a,e,i,o,u;
    scanf("%c",&x);
    if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u')
    {
        printf("VOWEL");
    }
    else
    {
        printf("CONSONANT");
    }
}