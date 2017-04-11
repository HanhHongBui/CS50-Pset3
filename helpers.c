/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>

#include "helpers.h"

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int i,j;
    int t;
    
    for ( i = 1; i < n; i++)
    {
        j = i;
        while (j > 0 && values[j-1] > values[j])
        {
            t = values[j];
            values[j] = values[j-1];
            values[j-1] = t;
            j--;
            
        }
    }
    return;
}

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    if (n <= 0)
    {
        return false;
    }
    else
    {
        int first, last, middle;
        first = 0;
        last = n - 1;
        middle = (first + last)/2;
        
        while (first <= last)
        {
            if (values[middle] < value)
            
                first = middle + 1;
            
            else if (values[middle] == value)
            {
                return true;
            }
            else
                last = middle - 1;
                middle = (first + last)/2;
        }
        
        return false;
    }
    
    return false;
}

