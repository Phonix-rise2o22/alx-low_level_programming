#include <stdio.h>
#include "main.h"

/**
 * main- Begin here
 * Return:always 0
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
