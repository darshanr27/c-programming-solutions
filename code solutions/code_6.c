// Q: Write a program to revese a integer

#include <stdio.h>

int main()
{
    int num, rev = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nThe input number: %d\n", num);
    while (num != 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num /= 10;
    }
    printf("Revesed number: %d", rev);
    return 0;
}