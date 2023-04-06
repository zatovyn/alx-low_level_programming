#include "main.h"

/**
 * find_prime - find the prime number
 * @n: number to check if prime
 * @m: number
 * Return: 1 if prime, otherwise 0
 **/

int find_prime(int n, int m)
{
	if (m == 1)
		return (1);
	else if (n % m == 0)
		return (0);
	else
		return (find_prime(n, m - 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: number
 * Return: 1 if prime number, otherwise 0
 **/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_prime(n, n - 1));
}

