#include <cs50.h>
#include <stdio.h>

/**
 *
 *  this prompts user for two strings and then reports if they are the
 * same or not the same.
 *
 * This will not work, because Strings are simply pointers to the first memory
 * value. Two different strings will point to two different memory values.
 *
 */

int main(void)
{
    printf("Say something: ");
    string s = GetString();
    
    printf("Say Something: ");
    string t = GetString();
    
    if (s == t)
    {
        printf("You typed the same thing!\n");
    }
    else
    {
        printf("You typed different things!\n");
    }
}
