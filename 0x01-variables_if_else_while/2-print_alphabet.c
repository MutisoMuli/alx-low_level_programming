#include <stdio.h>
/**
 * main - entry point
 * prints alphabets in lowercase
 * Return: Always zero
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
