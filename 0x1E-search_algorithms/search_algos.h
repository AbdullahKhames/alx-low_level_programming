#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int _strLen(char *str);
char *tostring(int num);
int _putStr(char *str);
int linear_search(int *array, size_t size, int value);
#endif
