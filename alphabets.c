#include <stdio.h>
#include "main.h"

/**
 * printAlphabet - Prints the alphabets from a to z, except c and k.
 *
 * Return: void
 */

void printAlphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 'c' || i == 'k')
		{
			continue;
		}
		_putchar('\n');
		_putchar(i);
	}
}
