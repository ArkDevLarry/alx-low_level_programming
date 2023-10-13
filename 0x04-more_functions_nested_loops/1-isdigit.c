#include "main.h"

/**
 * _isdigit - checks for digit
 * @n: the input to be checked
 * Return: 1 if n is digit, 0 otherwise
 */
int _isdigit(int n)
{
	if(n >= 0 && n <= 9)
	{
		return (1);
	}
	return (0);
}
