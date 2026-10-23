#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Eligible to vote\n");

        if (age >= 60)
        {
            printf("Senior citizen");
        }
        else
        {
            printf("Not a senior citizen");
        }
    }
    else
    {
        printf("Not eligible to vote\n");
        printf("Not a senior citizen");
    }

    return 0;
}
