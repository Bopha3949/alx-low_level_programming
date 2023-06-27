#include <stdio.h>
/**
 * int _strlen - returns the length
 * returns the length of a string
 *
 * @n: length of a string
 * return: 0
 */
int _strlen(char *s)
{
       	int length = 0;
    
	while (*s != '\0')
	{
		length++;
		s++;
	}
	return length;
}
