#include <stdio.h>

#define n 4

int min(int a[]);
int max(int a[]);

int min(int a[])
{
    int min = a[0], i;
    for (i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}

int max(int a[])
{
    int max = a[0], i;
    for (i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int main()
{
    int arr[n], x, y, i;
    for (i = 0; i <2; i++)
    {
        printf("Enter a number: ");
        scanf("%d", &arr[i]);
    }
    x = min(arr);
    y = max(arr);
    printf("Minimum number is: %d\n", x);
    printf("Maximum number is: %d", y);
    return 0;
}
