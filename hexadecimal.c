#include "main.h"

/**
 * hexa_decimal - it prints unsigned int in the base format
 * @parg: pointer to variable argument list
 * @base: the base at which the int is printed
 * Return: returns number of characters printed
*/
int hexa_decimal(va_list parg, int base)
{
	unsigned int n = va_arg(parg, unsigned int);
	int cnt = 0;
	char un_int[33] = {'0'};
	int i = 0;
	int modulus = 0;

	if (n == 0)
	{
		putchar('0');
		return (1);
	}

	while (n > 0)
	{
		modulus = n % base;
		un_int[i] = (modulus <= 9) ? ('0' + modulus) : ('A' + (modulus - 10));
		n /= base;
		i++;

	}

	un_int[i] = '\0';
	cnt += print_rev(un_int);

	return (cnt);
}
