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

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		if (ch != 'g' && ch != 'e')
			putchar(ch);
	}
	putchar('\n');
	return (0);
}
