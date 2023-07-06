#include "hash_tables.h"

/***/

int main(void)
{
	hash_table_t *ht = hash_table_create(1024);
	hash_node_t *a;
	hash_node_t *b;
	hash_node_t *c;
	ht = hash_table_create(1024);
	a = malloc(sizeof(hash_node_t));
	b = malloc(sizeof(hash_node_t));
	c = malloc(sizeof(hash_node_t));
	a->next = b;
	b->next = c;
	c->next = NULL;
	a->key = "a key";
	a->value = "a value";
        b->key = "b key";
        b->value = "b value";

        c->key = "c key";
        c->value = "c value";

	hash_table_set(ht, "betty", "cool");
	printf("%s\n", link_index(a, hash_djb2((const unsigned char *)b->key)));
	return(0);
}

