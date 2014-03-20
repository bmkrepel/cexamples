#include <cs50.h>
#include <stdio.h>

/**
 * this program swaps values for x and y.
 *  
 * this won't work because it is actually a and b (copies of x and y)
 * that are being swapped. a and b are scoped to function swap.
 *
 */

void swap(int a, int b);

int main(void)
{
    int x = 1;
    int y = 2;
    
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    printf("swapping...\n");
    swap(x, y);
    printf("swapped!\n");
    printf("x is %i\n", x);
    printf("y is %i\n", y);
}

void swap(int a, int b)
{
    int tmp = a;
    a = b;
    b = tmp;
}   
