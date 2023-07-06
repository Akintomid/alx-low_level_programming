#include "hash_tables.h"

/**
 * hash_table_print - Print a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int a;
	int toggle;

	if (ht == NULL)
		return;

	printf("{");

	for (a = 0, toggle = 0; a < ht->size; a++)
	{
		tmp = ht->array[a];
		if (tmp != NULL)
		{
			if (toggle == 1)
				printf(", ");
			printf("'%s': '%s'", tmp->key, tmp->value);
			while ((tmp = tmp->next) != NULL)
			{
				printf(", ");
				printf("'%s': '%s'", tmp->key, tmp->value);
			}

			toggle = 1;
		}
	}

	printf("}\n");
}
