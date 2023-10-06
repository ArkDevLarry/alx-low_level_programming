#include <stdio.h>

/**
 * main - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch;

	for (ch = 0; ch <= 10; ch++)
	{
		putchar(ch);
		if (ch != 9)
			putchar(", ");
	}
	putchar('\n');
	return (0);
}
