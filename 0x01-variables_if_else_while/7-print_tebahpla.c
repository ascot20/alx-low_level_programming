#include <stdio.h>
/**
 * main - entry point
 * Return: Always 0
 */
int main(void)
{
	char r;

	for (r = 'z'; r >= 'a'; r--)
	putchar(r);
	putchar('\n');
	return (0);
}