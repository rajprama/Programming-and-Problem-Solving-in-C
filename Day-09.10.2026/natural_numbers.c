#include <stdio.h>

int main()
{
    int n, i;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    if (n < 1)
    {
        printf("Enter a positive integer");
    }
    else
    {
        for (i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
    }

    return 0;
}
