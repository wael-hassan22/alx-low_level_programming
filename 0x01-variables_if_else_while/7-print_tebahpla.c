#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 * Return: Return 0 when success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
