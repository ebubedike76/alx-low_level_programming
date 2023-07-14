#include <stdio.h>
/**
 * main - A program that prints all the numbers of base sixteen in lowercase
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int x;

	for (x = 0; x < 16; x++)
	{
		if (x < 10)
		{
			putchar('0' + x);
		}
		else
		{
			putchar('a' + (x - 10));
		}
	}
	putchar('\n');
	return (0);
}
