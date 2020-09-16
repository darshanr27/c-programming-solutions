#include <stdio.h>
int main()
{
    int first, second, temp;
    printf("Enter the first number:");
    scanf("%d", &first);
    printf("\nEnter the second numbr:");
    scanf("%d", &second);

    temp = first;
    first = second;
    second = temp;

    printf("After swapping\nFirst number:%d\nSecond number:%d", first, second);
    return 0;
}