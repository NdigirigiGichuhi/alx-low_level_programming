#include "hash_tables.h"

/**
 * hash_table_print - Print  a hash table.
 * @ht: hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	int pair_one = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		hash_node_t *current = ht->array[i];

		while (current != NULL)
		{
			if (!pair_one)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			pair_one = 0;

			current = current->next;
		}
	}
	printf("}\n");
}
