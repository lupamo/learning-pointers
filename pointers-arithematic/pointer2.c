#include <stdio.h>

/**
 * main - pointers arithmetic
 *
 * Return: Always 0.
 */
int main(void)
{
    int n = 98;
    int *p = &n;
    
    printf("Value of %d\n", n);
    printf("address of n is %p\n", &n);
    printf("address of p is %p\n", &p);

    *p = 402;

    printf("The new value of n: %d\n", n);
    printf("The new address of n is: %p\n", &n);
   return (0);
}