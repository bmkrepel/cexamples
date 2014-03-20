#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * This program copies two strings, Capitalizing the copy. 
 *  
 * This will not work. It will capitalize both S and T. Copying a string
 * requires copying the whole sequence of characters.
 */

int main(void)
{
    printf("Say Something: ");
    string s = GetString();
    if (s == NULL)
    {
        return 1;
    }
    
    string t = s;
    printf("Capitalizing copy...\n");
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }
    
    printf("Original: %s\n", s);
    printf("Copy:     %s\n", t);
}
