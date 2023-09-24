#include<stdio.h>
#include<string.h>

int main()
{
    char s1[30];
    char s2[30];
    printf("Enter the first string: ");
    gets(s1);
    printf("Enter the second string: ");
    gets(s2);

    printf("Concatenated string is: %s", strcat(s1, s2));
    return 0;
}