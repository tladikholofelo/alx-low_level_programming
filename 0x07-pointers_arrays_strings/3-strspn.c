#include "main.h"

/**
 * _strspn - gets the length of the prefix
 * @s: the string
 * @accept: the string to use
 *
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	i = 0;
	count = 0;
	while (s[i] != ' ')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				count++;
				break;
			}
			j++;
		}
		if (accept[j] == '\0')
		{
			return (count);
		}
		i++;
	}
	return (count);
}
