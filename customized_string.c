#include "main.h"

/**
  * print_stringCustomized-prints string customised 4 non printable characters
  * @parg: pointer to variable argument list
  * Return: number of characters printed
  */
int print_stringCustomized(va_list parg)
{
	char *s = va_arg(parg, char *);
	int i = 0;
	int cnt = 0;
	unsigned int term = 0;

	if (s == NULL)
		cnt += _printf("%s", "(null)");
	else
	{
		while (s[i] != '\0')
		{
			if (s[i] < 32 || s[i] >= 127)
			{
				term = s[i];
				putchar('\\');
				putchar('x');
				cnt += 2;
				cnt += (term < 16) ? _printf("0%X", term) :
						_printf("%X", term);
			}
			else
			{
				putchar(s[i]);
				cnt++;
			}
			i++;

		}
	}
	return (cnt);
}
