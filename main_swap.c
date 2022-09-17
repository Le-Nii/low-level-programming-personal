#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - contains function to swap numbers
 *
 * @a: first number used for swapping
 * @b: second number used for swapping
 *
 * Retun: returns 0 on success
 */

int main(void)
{
	int a = 21;
	int b = 17;

	swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);
	return EXIT_SUCCESS;
}
