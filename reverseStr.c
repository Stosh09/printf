#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * print_rev - prints a string in reverse order
  * @s: pointer -> string to be printed
  * Return: void
  */
int print_rev(char *s)
{
	int len = 0;				/* Store the strirng length */
	int i = 0;					/* loop cnter */
	int cnt = 0;

	if (s != NULL)
	{

		len = _strlen(s);

		for (i = (len - 1); i >= 0; i--)
		{
			putchar(*(s + i));
			cnt++;
		}
	}
	return (cnt);
}