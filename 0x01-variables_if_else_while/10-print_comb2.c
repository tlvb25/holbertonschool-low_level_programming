
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
int a;
int b;

for (a = '0'; a <= '9'; a++)
{
	for (b = '0'; b <= '9'; b++)
{
		putchar(a);
		putchar(b);
		putchar(',');
		putchar(' ');
}
}
	putchar('\n');
	return (0);
}
