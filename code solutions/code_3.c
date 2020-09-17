//Q: Write a program for swapping the values without using a temporary variable

#include <stdio.h>
int main()
{
    int first, second;
    printf("Enter the first number:");
    scanf("%d", &first);
    printf("\nEnter the second numbr:");
    scanf("%d", &second);

    // logic
    first = first - second;
    second = first + second;
    first = second - first;

    printf("After swapping\nFirst number:%d\nSecond number:%d", first, second);
    return 0;
}
