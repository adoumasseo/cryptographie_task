#include "main.h"

/**
 * is_prime_number - a fct that check if a is prime with 26
 * @a: number to check
 *
 * Return: 0 if not and the inverse multiplicative if yes
 */

int is_prime_number(int a)
{
	int b = 26, rest = 0, reverse;

	if (a == 0)
		return (0);
	while (a % b != 0)
	{
		rest = a % b;
		a = b;
		b = rest;
	}
	if (rest != 1)
		return(0);
	reverse = (26 + rest) / 3;
	return (reverse);
}
