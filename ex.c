#include "shell.h"

/**
 **_strncpy - copies a string
 *@dest: the destination string to be copied to
 *@src: the source string
 *@n: the amount of characters to be copied
 *Return: the concatenated string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y, j;
	char *s = dest;

	y = 0;
	while (src[y] != '\0' && y < n - 1)
	{
		dest[y] = src[y];
		y++;
	}
	if (y < n)
	{
		j = y;
		while (j < n)
		{
			dest[j] = '\0';
			j++;
		}
	}
	return (s);
}

/**
 **_strncat - concatenates two strings
 *@dest: the first string
 *@src: the second string
 *@n: the amount of bytes to be maximally used
 *Return: the concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, t;
	char *s = dest;

	i = 0;
	t = 0;
	while (dest[i] != '\0')
		i++;
	while (src[t] != '\0' && t < n)
	{
		dest[i] = src[t];
		i++;
		t++;
	}
	if (t < n)
		dest[i] = '\0';
	return (s);
}

/**
 **_strchr - locates a character in a string
 *@s: the string to be parsed
 *@c: the character to look for
 *Return: (s) a pointer to the memory area s
 */
char *_strchr(char *s, char c)
{
	do {
		if (*s == c)
			return (s);
	} while (*s++ != '\0');

	return (NULL);
}
