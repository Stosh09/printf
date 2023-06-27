#include "main.h"
#include <unistd.h>

/**
  * switch_case2 - switches cases format cases
  * @c: character format
  * @parg: pointer to variable argument list
  * Return: int
  */
int switch_case2(char c, va_list parg)
{
	char *string = NULL;
	int cnt = 0;

	switch (c)
	{
		case 'p':
			cnt += print_p(parg);
			break;
		case 'S':
			cnt += print_stringCustomized(parg);
			break;
		case 'R':
			string = va_arg(parg, char *);
			if 
(string == NULL)
				cnt += _printf("%s", "(null)");
			else
				cnt += print_rot13(string);
			break;
		case 'r':
			string = va_arg(parg, char *);
			if (string == NULL)
				cnt += _printf("%s", "(null)");
			else
				cnt += print_rev(string);
			break;
			
		default:
			putchar('%');
			putchar(c);
			cnt += 2;
			break;
	}

	return (cnt);
}
