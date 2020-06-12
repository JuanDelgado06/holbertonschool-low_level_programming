#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 *
 * Return: 0
 */
int main(void)
{
	int one, two;

	for (one = '0'; one <= '9'; one++)
		for (two = '0'; two <= '9'; two++)
		{
			putchar(one);
			putchar(two);
			if (one != '9' || two != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
	putchar('\n');
	return (0);
}
