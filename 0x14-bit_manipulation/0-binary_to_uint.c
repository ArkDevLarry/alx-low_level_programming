#include "main.h"
#include <stdio.h>
/*
* * Convert binary to unsigned integer
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int l = 0;

	if (b[l] == '\0')
		return (0);

	while ((b[l] == '0') || (b[l] == '1'))
		n <<= 1;
		n += b[l] - '0';
		l++;

	return (n);
}
