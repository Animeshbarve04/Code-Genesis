#include <stdio.h>
#include <limits.h>

int main()
{
    int n, max, max2 = INT_MIN, i, t;
    printf("Enter number of elements ");
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    for (i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            t = max;
            max = arr[i];
            max2 = t;
        }
    }
    printf("%d", max2);

    return 0;
}