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
    else if (c>='a'&& c<='z'){
        printf("Consonant");
    }
    else
    {
        printf("Others");
    }
    return 0;
}

