#include "main.h"
#include <stdio.h>
/**
 *main - check the code
 *
 *return - always o.
 */
int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	Reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
