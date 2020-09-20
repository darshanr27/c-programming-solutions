// Q: Write a program for swapping the two strings using swap function

#include <stdio.h>
#include <string.h>

void swap(char *f_str, char *s_str)
{
    char temp[50];
    strcpy(temp, f_str);
    strcpy(f_str, s_str);
    strcpy(s_str, temp);
}

int main()
{
    char f_str[20], s_str[20];
    printf("Enter first string:");

    scanf("%s", f_str);
    printf("\nEnter second string:");
    scanf("%s", s_str);
    printf("<--Before Swapping-->\n");
    printf("First string: %s\n", f_str);
    printf("Second string: %s\n", s_str);
    swap(f_str, s_str);
    printf("<--After Swapping-->\n");
    printf("First string: %s\n", f_str);
    printf("Second string: %s", s_str);
    return 0;
}