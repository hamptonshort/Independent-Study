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
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    
    int beginning = 0;
    int end = n-1;
    
    // while the length of the list is more than zero
    while (beginning <= end)
    {
        // define the middle of the list
        int middle = (beginning + end) / 2;
        
        // if the middle number is the sought for number, return if true
        if (values[middle] == value)
        {
            return true;
        }
        
        // if the middle number is larger than the sought for number, search the left side of the list
        else if (values[middle] > value)
        {
            end = middle - 1;
        }
        // if the middle number is less than value, search to the right
        else
        {
            beginning = middle + 1;
        }
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // run the sort as many times as there are numbers
    for (int i = 0; i < n; i++)
    {
        // commit the smallest number to memory
        int smallest = i;
        
        // compare the smallest to the rest of the list
        for (int j = i + 1; j < n; j++)
        {
            // determine which number is smallest
            if (values[j] < values[smallest])
            {
                smallest = j;
            }
        }
        
        // save the smallest number and put the first number in the list in its place
        int tmp = values[smallest];
        values[smallest] = values[i];
        
        // place the smallest number at the beginning of the list
        values[i] = tmp;
    }
}
