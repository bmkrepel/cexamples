#include <cs50.h>
#include <stdio.h>

/**
 * this program prompts the user for an integer and prints out the values
 * between one and that integer 
 * 
 *
 */

int sigma(int m);

int main(void)
{
    int n;
    do
    {
        printf("Positive integer please: ");
        n = GetInt();
    }
    while (n < 1);
    
    int answer = sigma(n);
    
    printf("%i\n", answer);
}

int sigma(int m)
{
    if (m <= 0)
    {
        return 0;
    }
    else
    {
        return m + sigma(m - 1);
    }
    
}
