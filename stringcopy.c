#include "main.h"
/**
  * _strcpy - copies string src to dest
  * @src: source string
  * @dest: destination
  * Return: void
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
