#include <stdio.h>

// Show
void show_array(int *ptr, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", *ptr);
            ptr++;
        }
        printf("\n");
    }
    printf("\n");
}

// transpose
void transpose_matrix(int *ptr, int n)
{
    int temp[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[j][i] = *ptr;
            ptr++;
        }
    }
    show_array(temp, n);
}

// addition
void addition_matrix(int *a, int *b, int n)
{
    int temp[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            temp[i][j] = *a + *b;
            a++;
            b++;
        }
    }
    show_array(temp, n);
}

// multiplication
void multiplication_matrix(int n, int a[n][n], int b[n][n])
{
    int temp[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int sum=0;
            for(int k=0; k<n; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            temp[i][j] = sum;
        }
    }
    show_array(temp, n);
}

int main()
{
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    int arr[n][n];
    int arr2[n][n];

    // Input
    printf("Start entering elements in the array1-> \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element of position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &arr[i][j]);
        }
    }
    // Input2
    printf("Start entering elements in the array2-> \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("Enter the element of position (%d,%d): ", i + 1, j + 1);
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("Matrix 1 is: \n");
    show_array(arr, n);
    printf("Matrix 2 is: \n");
    show_array(arr2, n);

    printf("Transpose of Matrix 1 is: \n");
    transpose_matrix(arr, n);
    printf("Transpose of Matrix 2 is: \n");
    transpose_matrix(arr2, n);

    printf("Addition of Matrix 1 and Matrix 2 is: \n");
    addition_matrix(arr, arr2, n);

    printf("Multipication pf Matrix 1 and Matrix 2 is: \n");
    multiplication_matrix(n, arr, arr2);

    return 0;
}