#include<stdio.h>

void prime_check(int n)
{
    int c=0;
    for(int i=1; i<n/2; i++)
    {
        if(n%i == 0)
        {
            c++;
        }
    }

    if(c == 1) printf("The number %d is a prime number.\n", n);
    else printf("The number %d is not a prime number.\n", n);
}

int main()
{
    int number;
    printf("Enter the number to be checked: ");
    scanf("%d", &number);
    prime_check(number);
    return 0;
}