#include "hash_tables.h"

/**
 * hash_table_delete - delete given hash table
 * @ht: hash table given
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *prev;
	unsigned long int sz, a;

	if (ht == NULL)
		return;
	if (ht->array == NULL)
	{
		free(ht);
		return;
	}

	for (a = 0, sz = ht->size; a < sz; a++)
	{
		tmp = ht->array[a];
		while (tmp)
		{
			prev = tmp;
			tmp = tmp->next;
			free(prev->key);
			free(prev->value);
			free(prev);
		}
	}

	free(ht->array);
	free(ht);
}
