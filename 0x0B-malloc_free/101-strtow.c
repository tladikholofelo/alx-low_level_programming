#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * count_word - counts the words of a string
 * @s: the string
 *
 * Return: the number of words
 */
int count_word(char *s)
{
	int count, c, w;

	count = 0;
	w = 0;

	for (c = 0; s[c] != '\0'; c++)
	{
		if (s[c] == ' ')
			count = 0;

		else if (count == 0)
		{
			count = 1;
			w++;
		}
	}

	return (w);
}

/**
 * **strtow - splits a string into words
 * @str: the string
 *
 * Each element of this array should contain a single word, null-terminated.
 * Words are separated by spaces.
 *
 * Return: NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **matrix, *index;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				index = (char *) malloc(sizeof(char) * (c + 1));
				if (index == NULL)
					return (NULL);
				while (start < end)
					*index++ = str[start++];
				*index = '\0';
				matrix[k] = index - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	matrix[k] = NULL;

	return (matrix);
}
