#include <stdio.h>

void fibo_check(int a[], int n)
{

    for (int i = 0; i < n - 2; i++)
    {
        if (a[i] + a[i + 1] != a[i + 2])
        {
            printf("Not a fibonacci series.\n");
            return;
        }
    }
    printf("It is a valid fibonacci Series.\n");
}

int main()
{
    int arr[30];
    int n;
    printf("Enter the sequence of integers one by one: \n");
    printf("Input -1 to quit\n");
    for (int i = 0; i < 30; i++)
    {
        printf("Give your input: ");
        scanf("%d", &n);
        fflush(stdin);
        if (n == -1)
        {
            fibo_check(arr, i);
            break;
        }
        else
        {
            arr[i] = n;
        }
    }
    return 0;
}