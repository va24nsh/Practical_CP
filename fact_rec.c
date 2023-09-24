#include<stdio.h>

int fact(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}

int main()
{
    int number;
    printf("Enter the number for factorial calculation: ");
    scanf("%d", &number);
    int f = fact(number);
    printf("Factorial of %d is: %d\n", number, f);
    return 0;
}