#include <stdio.h>
#include <main.h>

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

	string_literal = "_putchar\n";
	i = 0;

	while (string_literal[i] != '\0')
	{
		_putchar(string_literal[i]);
		i++;
	}

	return (0);
}
