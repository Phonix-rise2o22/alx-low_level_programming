#include <stdio.h>

/**
 * main - Begin here
 * print alphabet a-z using putchar
 * Return : always 0
 */

int main(void)
{
int ch;
for (ch = 97; ch <= 122; ch++)
{
putchar(ch);									}
putchar("\n");

return (0);
}
