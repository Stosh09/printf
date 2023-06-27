#include "main.h"

/**
  * print_integer - prints an integer to standard output
  * @parg: pointer to variable argument list
  * Return: number of integers printed
  */
int print_integer(va_list parg)
{
	int number = va_arg(parg, int);
	unsigned int number_copy = number;
	int sign = 0, i = 0;
	int base = 10, quotient = 0;
	char tempSchar[20] = {0};
	int cnt = 0;

	if (number == 0)
	{
		putchar('0');
		return (1);
	}
	if (number < 0)
	{
		sign = 1;
		number_copy *= -1;
	}
	while (number_copy)
	{
		quotient = number_copy % base;
		tempSchar[i] = (quotient > 9) ? ('A' + quotient - 10) : (quotient + '0');
		number_copy /= base;
		i++;
	}
	if (sign)
		tempSchar[i++] = '-';
	tempSchar[i] = '\0';
	cnt = print_rev(tempSchar);
	return (cnt);
}