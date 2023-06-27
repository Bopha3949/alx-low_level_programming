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
	int a = 98;
	int b = 42;

	int temp = a;
	a = b;
	b = temp;
}
