#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	if (ht == NULL)
	{
		return;
	}

	printf("{\n");

	for (unsigned long int i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			printf("'%s': '%s'", current->key, current->value);

			if (current->next != NULL)
			{
				printf(", ");
			}
			else
			{
				printf("\n");
			}

			current = current->next;
		}
	}

	printf("}\n");
}

