#include <stdio.h>

int main()
{
    int marks;

    printf("Enter marks (0-100): ");
    scanf("%d", &marks);

    if (marks < 0 || marks > 100)
    {
        printf("Invalid marks");
    }
    else if (marks >= 91)
    {
        printf("Grade O");
    }
    else if (marks >= 81)
    {
        printf("Grade E");
    }
    else if (marks >= 71)
    {
        printf("Grade A");
    }
    else if (marks >= 61)
    {
        printf("Grade B");
    }
    else if (marks >= 51)
    {
        printf("Grade C");
    }
    else if (marks >= 40)
    {
        printf("Grade D");
    }
    else
    {
        printf("Grade F");
    }

    return 0;
}
