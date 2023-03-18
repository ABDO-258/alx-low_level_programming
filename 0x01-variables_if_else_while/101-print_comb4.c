#include <stdio.h>
/**
 * main -Entry point
 *
 * Return: must be (0)
 */

int main(void)
{
	int ch1, ch2, ch3;

	for (ch1 = 0 ; ch1 < 10 ; ch1++)
	{
		for (ch2 = 0 ; ch2 < 10 ; ch2++)
		{
			for (ch3 = 0 ; ch3 < 10 ; ch3++)
			{
				if (ch1 != ch2 && ch1 < ch2 && ch2 != ch3 && ch2 < ch3)
				{
				putchar(ch1 + '0');
				putchar(ch2 + '0');
				putchar(ch3 + '0');
					if (ch1 + ch2 != 17)
					{
					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
