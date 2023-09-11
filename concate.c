#include "main.h"
#include <stddef.h>

/**
 * *_concat - Function joins two strings.
 * @dest: Location appended string is joined.
 * @src: String to append to destination string.
 *
 * Return: dest.
 */
char *_concat(char *dest, const char *src)
{
	int strg1, strg2;

	for (strg1 = 0; dest[strg1] != '\0'; strg1++)

	strg2 = 0;

	do {
		dest[strg1] = src[strg2];
		strg1++;
		strg2++;
	} while (src[strg2] != '\0');

	dest[strg1] = '\0';
	return (dest);
}

/**
 * *_locate - Function locates the first instance of a substring
 * in the main string.
 * @haystack: Main string to locate substring.
 * @needle: Substring to locate in main string.
 *
 * Return: Pointer to beginning of the substring, else NULL if fail.
 */
const char *_locate(const char *haystack, const char *needle)
{
	int s1, s2;
	const char *ptr;

	for (s1 = 0; needle[s1] != '\0'; s1++)
	{
		ptr = haystack;

		do {
			for (s2 = 0; needle[s2]; s2++)
			{
				if (ptr[s2] != needle[s2])
					break;
			}
			if (needle[s2] == '\0')
				return (ptr);

			ptr++;

		} while (*ptr);
	}
	return (NULL);
}

/**
 * copystring - Function that duplicates a string.
 * @str: Pointer to string to be duplicated.
 *
 * Return: Duplicated string, else NULL if available memory not enough.
 */
char *copystring(const char *str)
{
	int n, dupli;
	char *new;

	if (str == NULL)
		return (NULL);

	for (dupli = 0; str[dupli] != '\0'; dupli++)

	new = (char *)malloc((dupli + 1) * sizeof(char));

	if (!new)
		return (NULL);

	for (n = 0; n <= dupli; n++)
		new[n] = str[n];

	new[dupli] = '\0';
	return (new);
	free(new);
}