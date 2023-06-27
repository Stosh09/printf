#include "main.h"

/**
 * print_p - prints pointer to void as memory address
 * @parg: pointer to variable argument list
 * Return: returns Number of characters printed
 */
int print_p(va_list parg)
{
	int cnt = 0;
	void *pointer = va_arg(parg, void *);

	if (pointer == NULL)
	{
		char *null_string = "(nil)";

		cnt += printf("%s", null_string);
	}
	else
	{
		char *string_address = malloc(sizeof(char) * (18));

		if (string_address == NULL)
			return (0);

		sprintf(string_address, "0x%lx", (unsigned long)pointer);
		cnt += printf("%s", string_address);
		free(string_address);
	}

	return (cnt);
}
