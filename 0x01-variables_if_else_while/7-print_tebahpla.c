#include <stdio.h>
/**
 * main - A program that prints lowercase alphabets in reverse
 *
 * Return: o (Success)
 *
 */
int main(void)
{
	char x;

	for (x = 'z'; x >= 'a'; x--)
		putchar(x);
	putchar('\n');
	return (0);
}
