#include <stdlib.h>
#include <stdio.h>
/**
 * main - Print alphABET
 *
 * Return 0
*/
int main(void)
{
char alpha = 'a';
char alphacap = 'A';

while (alpha <= 'z')
putchar(alpha++);
while (alphacap <= 'Z')
putchar(alphacap++);

putchar('\n');
return (0);
}
