#include "hash_tables.h"

int main(void)
{

	char s[] = "cisfun";
	printf("%lu\n", key_index((unsigned char *)s, 1024));
	return(EXIT_SUCCESS);
}
