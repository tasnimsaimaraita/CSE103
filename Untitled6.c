#include<stdio.h>

int main()
{
    char c;
    printf("Enter a char:");
    scanf("%c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' ||c=='u')
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}

