#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print alphabet
 *
 * return 0
 */
int main(void)
{
char alpha = 'a';
while (alpha <= 'z')
{
if (alpha != 'e' && alpha != 'q')
putchar(alpha);
alpha++;
}

putchar('\n');
return (0);
}
