#include "main.h"
/**
 * puts2-prints every other character of a string
 * @str:pointer to the string
 */
void puts2(char *str)
{
int n = 0;

while (str[n])
{
if (n % 2 == 0)
_putchar(str[n]);
n++;
}
_putchar('\n');
}
