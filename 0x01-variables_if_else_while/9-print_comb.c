#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 *@void: void
 *
 *Description: main where all the code is called.
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n <= 57 ; n++)
	{
		putchar(n);
		putchar(44);
		putchar(32);
	}
	putchar('\n');
	return (0);
}
