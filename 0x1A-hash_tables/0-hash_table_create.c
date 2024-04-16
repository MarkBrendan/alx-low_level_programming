#include "hash_tables.h"

/**
 * *hash_table_create - Write a function that creates a hash table.
 * @size: size is the size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{

	hash_table_t **table;
	unsigned long int num, fel_tab;

	table = (hash_table_t **)malloc(sizeof(hash_table_t *) * size);

	if (table == NULL)
	{
		return (NULL);
	}

	for (num = 0; num < size; num++)
	{
		table[num] = (hash_table_t *)malloc(sizeof(hash_table_t));

		if (table[num] == NULL)
		{
			for (fel_tab = 0; fel_tab < num; fel_tab++)
			{
				free(table[fel_tab]);
			}
			free(table);
			return (NULL);
		}
	}

	return (*table);
}
