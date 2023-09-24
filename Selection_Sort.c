#include<stdio.h>

void show_array(int ar[],int n)
{
    for(int i=0; i<n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

//Selection Sort
void sort_selection(int a[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min = i;
        for(int j = i; j<n; j++)
        {
            if(a[j]<a[min])
            {
                min = j;
            }
        }

        int temp = a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    // Show
    show_array(a, n);
}

int main()
{
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    int arr[n];

    // Input
    printf("Start entering elements in the array-> \n");
    for(int i=0; i<n; i++)
    {
        printf("Enter the element %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    sort_selection(arr, n);

    return 0;
}