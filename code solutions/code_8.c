// Write a command line argument program to find Fibonacci series.

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int first=0, second=1, next, n, i;
    n=atoi(argv[1]);
    printf("First %d terms of Fibonacci series: ", n);
    for(i=0;i<n;i++)
    {
        if(i<=1)
            next = i;
        else
        {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d ", next);
    }
    return 0;
}