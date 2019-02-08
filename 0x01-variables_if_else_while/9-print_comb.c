
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

for (n = '0'; n <= '9' ; n++)
{
	putchar(n);
	if (n < '9')
	{
	putchar(',');
	putchar(' ');
	}
}
putchar('\n');
return (0);
}
