#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * Return: return 0 when success
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
