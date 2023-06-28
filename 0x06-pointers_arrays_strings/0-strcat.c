#include <stdio.h>
/**
 * main -  concatenating two string
 *
 * return: always 0
 */
char *_strcat(char *dest, char *src);
{
	char* concatenated = _strcat(str1, str2);
	printf("Concatenated string: %s\n", concatenated);

	free(concatenated);
}
	return 0;
