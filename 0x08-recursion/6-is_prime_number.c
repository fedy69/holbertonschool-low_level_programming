#include "main.c"

/**
 *  checks for prime number against base
 *
 * @n: number to check
 * @i: base
 *
 * Return: true or false
 */

int primecheck(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i > n / 2)
	{
		return (1);
	}
	else
	{
		return (primecheck(n, i + 1));
	}
}

/**
 *  checks if prime number
 *
 * @n: number to check
 *
 * Return: 1 if prime number, otherwise 0
 *
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (primecheck(n, 2))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}