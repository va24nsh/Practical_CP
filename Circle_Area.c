#include<stdio.h>

int main()
{
    int r;
    float area;
    printf("Enter the radius of circle: ");
    scanf("%d", &r);
    area = 22.0/7.0 * r * r;
    printf("Area of the circle of radius %d is: %f", r, area);
    return 0;
}