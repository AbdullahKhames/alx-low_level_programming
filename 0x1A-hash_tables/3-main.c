#include "hash_tables.h"

/***/
void print_linked_list(hash_node_t *head)
{
	int len;
	size_t i = 0;
	hash_node_t *current;
	if (!head)
	{
		return;
	}

	current = head;
	len = link_length(head);
	

	for ( ;i < len; i++)
	{
		printf("\t%lu->%s", i, current->value);
		current = current->next;

	}
	printf("\n");
	
}
void print_ht(hash_table_t *ht)
{
	int i = 0;

	if (!ht){
		return;
	}
	for (; i < ht->size; i++)
	{
		if (ht->array[i] == NULL)
		{
			printf("\t%i\t----\n",i);
		}
		else
		{
			printf("\t%i--->", i);

			print_linked_list(ht->array[i]);

		}

	}
	
}
int main(void)
{
	hash_table_t *ht = hash_table_create(1024);
	hash_node_t *a;
	hash_node_t *b;
	hash_node_t *c;
	ht = hash_table_create(190);
	// a = malloc(sizeof(hash_node_t));
	// b = malloc(sizeof(hash_node_t));
	// c = malloc(sizeof(hash_node_t));
	// a->next = b;
	// b->next = c;
	// c->next = NULL;
	// a->key = "a key";
	// a->value = "a value";
    //     b->key = "b key";
    //     b->value = "b value";

    //     c->key = "c key";
    //     c->value = "c value";
	// printf("%s\n", link_index(a, hash_djb2((const unsigned char *)b->key)));


	hash_table_set(ht, "betty", "fourth");
	hash_table_set(ht, "betty", "third");
	hash_table_set(ht, "betty", "second");
	hash_table_set(ht, "betty", "first");
	hash_table_set(ht, "betty", "zeroth");

	print_ht(ht);
	// ht->array[0] = malloc(sizeof(hash_node_t *));
	// ht->array[0]->value = "hamada";
	// printf("%s\n",ht->array[0]->value);
	return(0);
}

