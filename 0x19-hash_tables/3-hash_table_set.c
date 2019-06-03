#include "hash_tables.h"

/**
 * hash_table_set -
 *
 * Return: 
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

}

unsigned long int index = hash_djb2(key);
    
    for(index = 0; index < size; index++) 
    { 
        if(key[index] == index) 
            return index; 
    } 
    return (-1); 