#include "main.h"

/**
* pr_string - print string
* @parg: pointer -> variable argument list
* Return: count of characters printed
*/
int pr_string(va_list parg)
{
	char *s = va_arg(parg, char *);
	int cnt = 0;

	if (s == NULL)
	{
		cnt += _printf("%s", "(null)");
	}

	else
	{
		while (*s != '\0')
		{
			putchar(*s);
			s++;
			cnt++;
		}
		
	}

	return (cnt);
}
