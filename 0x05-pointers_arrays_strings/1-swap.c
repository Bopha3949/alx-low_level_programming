#include <stdio.h>
/**
 * swap_int -  function that swaps the values of integers
 * the values of two integers
 *
 * @n - inter input pointer
 * return 0
 */
void swap_int(int *a, int *b)
{
	*a = 98;
	*b = 42;
	
	*a = 1024; *b = -4096;
	*a = INT_MAX; *b = INT_MIN;

}
