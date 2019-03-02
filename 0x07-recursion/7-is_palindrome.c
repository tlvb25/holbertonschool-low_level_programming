#include "holberton.h"
int findlen(char *str);
int is_palindrome(char *s);
int chk_palindrome(char str[], int start, int end);

/**
 * is_palindrome - function that determines if a string is a palindrome
 * @s: input
 *
 * Return: updated string
 */

int is_palindrome(char *s)
{
	int end;

	end = findlen(s) - 1;

	return (chk_palindrome(s, 0, end));
}

/**
 * chk_palindrome - checks each character to see if matching
 * @str: the string passed into the function
 * @start: the integer that marks the beginning of the string
 * @end: the integere that marks the end of the string
 *
 * Return: 1 if string is palindrome
 */

int chk_palindrome(char str[], int start, int end)
{
	if (start == end)
	{
		return (1);
	}

	if (str[start] != str[end])
	{
		return (0);
	}

	if (start < end + 1)
	{
		return (chk_palindrome(str, start + 1, end - 1));
	}
	return (1);
}


/**
 * findlen - finds the lenght of a string
 * @str: the string passed into function
 *
 * Return: return the length of a string as an integer
 */

int findlen(char *str)
{
	if (*str == '\0')
		return (0);
	else
		return (findlen(str + 1) + 1);
}
