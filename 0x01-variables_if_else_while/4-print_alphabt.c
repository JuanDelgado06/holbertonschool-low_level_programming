#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
/**
 * main - Print alphabet
 *
 * return 0
 */
int main(void)
{
char alphabet = 'a';

while (alphabet <= 'z')
{
if (alphabet != 'q' && alphabet != 'e')
putchar(alphabet);
alphabet++;
}

putchar('\n');
return (0);
}
