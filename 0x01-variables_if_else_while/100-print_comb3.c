#include <stdio.h>
/**
 * main - A program that prints different combinations of two digits
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int x, y;

	for (x = 0; x < 10; x++)
	{
		for (y = x + 1; y < 10; y++)
		{
			putchar('0' + x);
			putchar('0' + y);
			if (x != 8 || y != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
