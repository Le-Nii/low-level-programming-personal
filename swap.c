#include <stdio.h>

/**
 *swap - Function to swap the value of two numbers.
 *
 * @*pa: pointer for the first number
 * @*pb: pointer for the second number.
 *
 * Return: no return
 */  

void swap(int *pa, int *pb)
{
	int t = *pa;
	*pa = *pb;
	*pb = t;
}
