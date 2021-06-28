#include <stdio.h>

int main()
{
    int i, j;
    for (i = 1; i <= 8; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c", 72 - j + 1);
        }
        printf("\n");
    }

    return 0;
}