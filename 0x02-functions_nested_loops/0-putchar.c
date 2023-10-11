#include "main.h"
/**
 * main - Print "Beauty" followed by a new line.
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
int c = 0;
char beauty[7] = "_putchar\n";

while (c < 6)
{
_putchar(beauty[c]);
c++;
}
return (0);
}
