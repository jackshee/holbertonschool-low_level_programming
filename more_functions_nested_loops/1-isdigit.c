/**
 * _isdigit - function to check if c is a digit
 * @c: integer input character
 *
 * Description: checks if the input is an ASCII digit 
 * Return: 1 (if c is digit), 0 otherwise
 *
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

