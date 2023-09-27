#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table.
 * @ht: The hash table you want to add or update the key/value to.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (must be duplicated).
 *
 * Returns: 1 if it succeeded, 0 otherwise.
 * In case of collision, add the new node at the beginning of the list.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node = NULL;
    hash_node_t *temp = NULL;

    if (ht == NULL || key == NULL || strlen(key) == 0)
        return (0);

    index = key_index((const unsigned char *)key, ht->size);

    temp = ht->array[index];

    /* Check if the key already exists in the linked list */
    while (temp != NULL)
    {
        if (strcmp(temp->key, key) == 0)
        {
            /* Key found, update the value */
            free(temp->value);
            temp->value = strdup(value);
            if (temp->value == NULL)
                return (0);
            return (1);
        }
        temp = temp->next;
    }

    /* Key not found, create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (new_node == NULL)
        return (0);

    new_node->key = strdup(key);
    if (new_node->key == NULL)
    {
        free(new_node);
        return (0);
    }

    new_node->value = strdup(value);
    if (new_node->value == NULL)
    {
        free(new_node->key);
        free(new_node);
        return (0);
    }

    /* Add the new node to the beginning of the linked list */
    new_node->next = ht->array[index];
    ht->array[index] = new_node;

    return (1);
}

