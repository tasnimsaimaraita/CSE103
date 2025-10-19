#include<stdio.h>
int main()
{
    char c;
    printf("Enter c:");
    scanf("%c",&c);
    if(c>='A' && c<='Z')
    {
        printf("Uppercase alphabet");
    }
    else if(c>='a' && c<='z')
    {
        printf("Lowercase alphabet");
    }
    else
    {
        printf("Not a alphabet");
    }
    return 0;
}
