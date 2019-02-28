#include "holberton.h"
int divideforprime(int n, int count);
/**
 * is_prime_number - checking if a number is prime
 * @n: number we are checking if prime
 * Return:1 if prime, 0 otherwise
 **/

int is_prime_number(int n)
{
	int count;

	count = 2;
	count = divideforprime(n, count);
	return (count);
}


/**
 * divideforprime - Checks if n is prime
 * @n:input
 * @count:input
 * Return: 1 if prime 0 otherwise
 */
int divideforprime(int n, int count)
{
	if (n == count)
		return (1);

	if (n <= 1 || n % count == 0)
		return (0);

	return (divideforprime(n, count + 1));
}
