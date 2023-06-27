#include "main.h"

/**
  * _strlen - returns length of passed string
  * @s: the sting to find the length
  * Return: int length of string
  */

int _strlen(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i++] != '\0')
		len++;
	return (len);
}
