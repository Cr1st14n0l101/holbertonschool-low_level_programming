#include "hash_tables.h"

/**
 * hash_table_print - Function that prints a hash table.
 * @ht: The hash table
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	size_t i = 0, counter = 0;
	hash_node_t *array = NULL;
	char *del = "";

	if (!ht)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			array = ht->array[i];
			while (array)
			{
				counter++;
				if (counter != 1)
					del = ", ";
				printf("%s'%s': ", del, array->key);
				printf("'%s'", array->value);
				array = array->next;
			}
		}
	}
	printf("}\n");
}
