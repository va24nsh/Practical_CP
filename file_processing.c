#include<stdio.h>

int main()
{
    FILE *ptr, *ptr2;
    ptr = fopen("CP_Lab_1.txt", "r");
    ptr2 = fopen("CP_Lab_2.txt", "w");
    int num1, num2;
    fscanf(ptr, "%d", &num1);
    fscanf(ptr, "%d", &num2);
    fprintf(ptr2, "The sum of two numbers are: %d", num1+num2);
    return 0;
}