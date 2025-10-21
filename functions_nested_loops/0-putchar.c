#include <stdio.h>

int _putchar(char c);
/**
 * main - Entry
 *
 * Return: 0 (always success)
 *
 */
int main(void)
{
	char *string_literal;
	int i;

	string_literal = "_putchar";
	i = 0;

	while (string_literal[i] != '\0')
	{
		_putchar(string_literal[i]);
		i++;
	}

	return (0);
}
