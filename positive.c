#include <stdio.h>
#include <cs50.h>

/**
 *
 * this is an example of how to make a function that 
 * prompts the user for a positive integer
 *
 */
 
int GetPositiveInt(void);

int main(void)
{
    int n = GetPositiveInt();
    printf("Thanks for the %i!\n", n);
}

int GetPositiveInt(void)
{
    int n;
    do
    {
        printf("give me a positive integer: ");
        n= GetInt();
    }
    while (n <= 0);
    return n;
}
