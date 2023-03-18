#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: must be (0)
 */

int main(void)
{
	int ch1, ch2;

	for (ch1 = 0 ; ch1 < 10 ; ch1++)
	{
		for (ch2 = 0 ; ch2 < 10 ; ch2++)
		{
			if (ch1 != ch2 && ch1 < ch2)
			{
				putchar(ch1 / 10 + '0');
				putchar(ch1 % 10 + '0');
				putchar(' ');
				putchar(ch2 / 10 + '0');
				putchar(ch2 % 10 + '0');
				if (ch1 != 98 || ch2 != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
