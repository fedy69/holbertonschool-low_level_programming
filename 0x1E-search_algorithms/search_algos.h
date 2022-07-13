#ifndef _SEARCH_ALGO_H
#define _SEARCH_ALGO_H
#include<stdio.h>
#include<math.h>
int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
#endif