#include "sort.h"

/**
* swap_int - swap two values at two pointers
* @a: first pointer
* @b: second pointer
*
* Return: void
*/

void swap_int(int *a, int *b)
{
        int temp = 0;

        temp = *a;
        *a = *b;
        *b = temp;

}
