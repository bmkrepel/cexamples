/**
 *
 *  implements an iterative version of binary search
 *  we are searching for "value"
 *  values[] is a sorted list
 *
 */
 
#include <cs50.h>
#include <stdio.h>
#include <stdbool.h>

bool binary_search(int value, int values[], int n) // n is size of list
{
    int beginning = 0;
    int ending = n - 1;
    // while length of list > 0
    while(ending >= beginning)
    {
        // look at middle of list
        int middle = (beginning + ending) / 2; // int midpoint = findMidPoint(min, max)??
        if (values[middle] == value)
        {
            // if value is here, return true  
            return true;
        }        
        // if middle is > value, search left half of list
        else if(values[middle] > value)
        {
            ending = middle - 1;
            
        }
        // else if middle is < value, search right half of list
        else
        {
            beginning = middle + 1;
        }      
         
    }
    // return false
    return false;
  
}
