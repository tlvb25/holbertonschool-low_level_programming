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
	char ch;
	char CH;

	for (ch = '0' ; ch <= '9' ; ch++)
	{
		putchar(ch);
	}
	for (CH = 'a' ; CH <= 'f' ; CH++)
	{
		putchar(CH);
	}
	putchar('\n');
	return (0);
}
