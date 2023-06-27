#include "main.h"

/**
* print_character - prints characters
* @parg: pointer to variable argument list
* Return: Number of characters printed
*/
int print_character(va_list parg)
{
	int cnt = 0;

	putchar(va_arg(parg, int));
	cnt++;

	return (cnt);
}
