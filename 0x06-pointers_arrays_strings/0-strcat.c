#include "main.h"
/**
 * _strcat -  concatenating two string
 *
 * @ dest: the string to be appended uppon
 *
 * return: always 0
 */
char *_strcat(char *dest, char * *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\o')
	{
		i++;
	}
	j = 0;
	while(src[j];
			{
			dest[i] = src[j];
			i++;
			j++;
			}
			dest[i] = ''\0';
			return (dest);
			}
