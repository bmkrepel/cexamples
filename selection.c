#include <cs50.h>
#include <stdio.h>

/**
 *
 *  selection.c
 * 
 *  selection sort implementation
 *
 */

void selection_sort(int values[], int n)
{
    // while the list is out of order
    for (int i = 0; i < n; i++)
    {
        remember the smallest value
        int smallest_val = i;
        
        // compare with the rest of the list
        for (int j = i + 1; j < n; j++)
        {
            // find smallest number
            if (values[smallest_val] > values[j])
            {
                smallest_val = j;
            }

        }
        
        // put beginning of the list where the smallest number was
        int tmp = values[smallest_val];
        values[smallest_val] = values[i];
        
        // place smallest number at beginning of list
        values[i] = tmp;
    }
    
}
