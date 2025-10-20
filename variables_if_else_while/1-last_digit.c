#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include<stdio.h>

/**
 * main - Enter
 *
 * Return - 0 (Success)
 */
int main(void)
{
	int last_digit;
	int n;
	const char *output_str;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* use modulo 10 to get last digit (remainder) */ 
	last_digit = abs(n) % 10;

	if (last_digit > 5)
		output_str = " and is greater than 5";
	else if (last_digit == 0)
		output_str = " and is 0";
	else
		output_str = " and is less than 6 and not 0";
		
	printf("Last digit of %d is%s\n", n, output_str); 
	return (0);
}
