// Write a command line argument program to find factorial of number.

#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
    int i,n;
    unsigned long long factorial=1;
    n=atoi(argv[1]);
    for(i=1;i<=n;i++)
    {
        factorial*=i;
    }
    
    printf("%d!:%llu", n, factorial);
    return 0;
}