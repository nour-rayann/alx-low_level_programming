#include"main.h"
/**
 * is_prime_number - determines if the input is a prime number
 * @n: integer to be checked
 * @check: checks if prime
 * Return: 1
*/
int func(int n, int check);
int is_prime_number(int n)
{
	return (func(n, 2));
}
/**
 * func - a helper function
 * @n: integer to be checked
 * @check: checks if prime
 * Return: int
*/
int func(int n, int check)
{
	if (n % check == 0 && check < n)
		return (0);
	else if (n % check != 0 && check < n)
		return (func(n, check + 1));
	else if (n <= check && n > 1)
		return (1);
	else
		return (0);
}
