// Q: Write a program for swapping the two array

#include <stdio.h>
int main()
{
    int a[10], b[10], c[10], i, n;
    printf("Enter the size of the array(1-10):");
    scanf("%d", &n);
    printf("\nEnter first array:");
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nEnter second array:");
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);
    printf("\n<--Before swapping-->\n");
    printf("First array: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\nSecond array:");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", b[i]);
    }
    // Logic
    for (i = 0; i < n; i++)
    {
        c[i] = a[i];
        a[i] = b[i];
        b[i] = c[i];
    }
    printf("\n<--After swapping-->\n");
    printf("First array:");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("\nSecond array:");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", b[i]);
    }
    return 0;
}