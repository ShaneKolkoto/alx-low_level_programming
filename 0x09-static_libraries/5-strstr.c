#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
	char *shaystack;
	char *aneedle;

	while (*haystack != '\0')
	{
		shaystack = haystack;
		aneedle = needle;

		while (*haystack != '\0' && *aneedle != '\0' && *haystack == *aneedle)
		{
			haystack++;
			aneedle++;
		}
		if (!*aneedle)
			return (shaystack);
		haystack = shaystack + 1;
	}
	return (0);
}
