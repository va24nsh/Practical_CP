#include<stdio.h>

int gcd(int a, int b)
{
    if(b == 0)
    {
        return a;
    }
    else
    {
        int q = a/b;
        int rem = a%b;
        gcd(b, rem);
    }
}

int main()
{
    int a, b;
    printf("Enter the two numbers a and b: ");
    scanf("%d %d", &a, &b);

    int g = (a>b)?gcd(a,b):gcd(b,a);

    printf("GCD using Euclidean Algorithm of %d and %d is: %d\n", a, b, g);
    
    return 0;
}