#include <stdio.h>

void show_array(int ar[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}

void binary_Search(int a[], int n, int x)
{
    int start = 0;
    int end = n - 1;
    int flag = 0;
    while (start <= end)
    {
        int mid = (start + end) / 2;
        if (a[mid] == x)
        {
            printf("Found at position %d\n", mid + 1);
            flag = 1;
            return;
        }
        else if (x < a[mid])
        {
            end = mid - 1;
        }
        else if (x > a[mid])
        {
            start = mid + 1;
        }
    }
    if(flag == 0) printf("NOT found in the array\n");
}

int main()
{
    int n;
    printf("Enter the number of elements of the array: ");
    scanf("%d", &n);
    int arr[n];

    // Input
    printf("Start entering elements in the array-> \n");
    for (int i = 0; i < n; i++)
    {
        printf("Enter the element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    show_array(arr, n);
    /*
        arr must be sorted in order to perform binary search
        in case if not sorted then use selection sort program to sort the following array.
    */
    binary_Search(arr, n, 4);

    return 0;
}