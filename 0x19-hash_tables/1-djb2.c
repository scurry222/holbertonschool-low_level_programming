#include "hash_tables.h"

/**
* hash function to use djb2 algorithm
* @str: string to add to hash table
*
* Return: index of string in hash table
*/

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
