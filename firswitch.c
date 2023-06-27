#include "main.h"
#include <unistd.h>

/**
  * switch_case - switches format cases
  * @c: character format
  * @parg: pointer -> variable argument list
  * Return: returns count
  */
int switch_case(char c, va_list parg)
{
	int cnt = 0;

	switch (c)
	{
		case 'c':
			cnt += print_character(parg);
			break;
		case 's':
			cnt += pr_string(parg);
			break;
		case '%':
			putchar('%');
			cnt++;
			break;
		case 'd':
		case 'i':
			cnt += print_integer(parg);
			break;
		case 'b':
			cnt += print_unsignedInt(parg, 2);
			break;
		case 'u':
			cnt += print_unsignedInt(parg, 10);
			break;
		case 'o':
			cnt += print_unsignedInt(parg, 8);
			break;
		case 'x':
			cnt += print_unsignedInt(parg, 16);
			break;
		case 'X':
			cnt += hexa_decimal(parg, 16);
			break;
		default:
			cnt += switch_case2(c, parg);
			break;
	}

	return (cnt);
}
