#include <stdio.h>
/**
 * main - that prints all single digit numbers of base ten starting from zero
 *
 * Return: 0 (Success)
 *
 */
int main(void)
{
	int x;

	for (x = 0; x < 10; x++)
		putchar(x + '0');
	putchar('\n');
	return (0);
}
