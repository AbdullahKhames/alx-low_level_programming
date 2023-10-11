#ifndef SEARCH_ALGOS_H
#define SEARCH_ALGOS_H
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include<math.h>

int _strLen(char *str);
char *tostring(int num);
int _putStr(char *str);
char *caseZero();
void printArr(int *array, size_t size, int start, int end);
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
#endif
