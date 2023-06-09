#include "main.h"

/**
  * _strncpy - function coping strings
  * @dest: string destination
  * @src: string source
  * @n: integer to consider
  * Return: copied string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
