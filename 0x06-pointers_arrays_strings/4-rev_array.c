#include "main.h"
/**
 * reverse_array - Reverses the content of an array of integers.
 * @a: The array of integers to be reversed.
 * @n: The number of elements in the array.
 */

void reverse_array(int *a, int n)
{
	int i = 0, j = n - 1;

	while (i < j)
	{
		int tmp = a[i];

		a[i] = a[j];
		a[j] = tmp;
		i++;
		j--;
	}
}
