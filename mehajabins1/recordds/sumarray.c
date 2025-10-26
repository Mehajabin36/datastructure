#include <stdio.h>

int main()
{
    int A[50], n, i, sum = 0;

    do
    {
        printf("Enter how many numbers you want to store (max 50): ");
        scanf("%d", &n);

        if (n > 50)
            printf("Entered number is larger than array size (50). Please try again.\n");

    } while (n > 50);

    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }

    for (i = 0; i < n; i++)
    {
        sum = sum + A[i];
    }

    printf("Sum of %d numbers is: %d\n", n, sum);

    return 0;
}

