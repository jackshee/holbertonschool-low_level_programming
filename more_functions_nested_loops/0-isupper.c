#include <stdio.h>
/**
 * _isupper - capital
 * @c: character as integer
 *
 * Description: this checks if character is capitalised
 * Return: 1 if caps, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
