#include <stdio.h>

int main()
{
    int a, b, i, j = 2;
    printf("Values of a and b\n");
    scanf("%d %d", &a, &b);
    for ( i = a; i <= b; i++)
    {
        for ( j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            printf("%d ", i);
        }
    }

    return 0;
}