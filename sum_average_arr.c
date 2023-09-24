#include<stdio.h>

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

    // Sum and Average
    float sum;
    float average;
    for(int i=0; i<n; i++)
    {
        sum += arr[i];
    }
    average = sum/n;

    // Output
    printf("The sum and average of the list is %f, %f repectively.\n", sum, average);
    return 0;
}