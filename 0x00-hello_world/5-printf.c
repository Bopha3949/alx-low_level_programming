#include<stdio.h>
/**
* main - Entry point
*
* Return: 0 (Success)
*/
int main(void)
{
	char b;
	int o;
	long int p;
	long-long int h;
	float a;

	printf("Size of a char: %lu byte(s)\n",(unsigned long) sizeof(b));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(o));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(h));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(a));
	return (0);
}
