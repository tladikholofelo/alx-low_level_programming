#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int index);
/**
 * is_palindrome - returns 1 if a string is a palindrome and 0 if not.
 * @s: the string to check
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int index = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, index));
}

/**
 * find_strlen - returns the length of a string
 * @s: the string to be checked
 *
 * Return: the length of the string
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}
	return (len);
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 * @len: the length of s
 * @index: the index of the string to be checked
 *
 * Return: -1 if the string is a palindrome, and 0 if not.
 */
int check_palindrome(char *s, int len, int index)
{
	if (s[index] == s[len / 2])
		return (1);

	if (s[index] == s[len - index - 1])
		return (check_palindrome(s, len, index + 1));

	return (0);
}
