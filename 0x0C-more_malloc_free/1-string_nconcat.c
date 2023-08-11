#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings with a limit on s2 length.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes to concatenate from s2.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	unsigned int total_len = 0;
	unsigned int i, j;
	char *result;

	if (s1 == NULL)
	s1 = "";
	if (s2 == NULL)
	s2 = "";

	while (s1[s1_len])
	s1_len++;
	while (s2[s2_len])
	s2_len++;

	if (n >= s2_len)
	n = s2_len;

	total_len = s1_len + n;

	result = malloc(total_len + 1);

	if (result == NULL)
	return (NULL);

	for (i = 0; i < s1_len; i++)
	result[i] = s1[i];

	for (j = 0; j < n; j++, i++)
	result[i] = s2[j];

	result[i] = '\0';

	return (result);
}
