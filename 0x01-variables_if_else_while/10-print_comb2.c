#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int one, two;

for (one = '0'; one <= '9'; one++)
{
for (two = '0'; two <= '9'; two++)
{
putchar(one);
putchar(two);
if (two != '9' && one != '9')
{
putchar(',');
putchar(' ');
}
}
}

putchar('\n');
return (0);
}
