#include "main.h"

/**
  * print_rot13 - print stringing after evaluating rot13 conversion
  * @s: stringing to be converted to rot 13
  * Return: number of characters printed
  */
int print_rot13(char *s)
{
	char s1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;						
	int j = 0;						
	int cnt = 0;
	char *string = malloc(sizeof(char) * (1 + _strlen(s)));

	if (string == NULL)
		return (0);
	string = _strcpy(string, s);
	while (string[i])
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (string[i] == s1[j])
			{
				string[i] = s2[j];
				break;
			}
		}
		i++;
	}

	for (i = 0; string[i] != '\0'; i++, cnt++)
		putchar(string[i]);

	free(string);
	string = NULL;
	return (cnt);
}