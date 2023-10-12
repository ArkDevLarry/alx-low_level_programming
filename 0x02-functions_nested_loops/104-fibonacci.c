#include <stdio.h>
#include "main.h"
/**
 * main - finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 * followed by a new line
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int i;
	unsigned long sum;
	int f1 = 1, f2 = 2;

	printf("%d, %d, ", f1, f2);
	for (i = 1; i <= 98; i++)
	{
		sum = f1 + f2;
		printf("%lu", sum);
		if (i < 98)
		{
			putchar(',');
			putchar(' ');
		}
		f1 = f2;
		f2 = sum;
	}	
	return (0);
}
