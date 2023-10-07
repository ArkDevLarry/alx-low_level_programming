#include <stdio.h>


int main (void) {

	int dg1, dg2, dg3, dg4;

	for (dg1 = 0; dg1 <= 9; dg1++)
	{
		for (dg2 = 0; dg2 <= 9; dg2++)
		{

			for (dg3 = 0; dg3 <= 9; dg3++)
			{
				for (dg4 = 1; dg4 <=9; dg4++)
				{
					putchar(dg1);
					putchar(dg2);
					putchar(' ');
					putchar(dg3);
					putchar(dg4);

					if (dg1 == 9 && dg2 == 8 && dg3 == 9 && dg4 ==9)
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
