#include "main.h"

/**
 *  reverse_array -reverses an array
 *  @a: array
 *  @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int tmp, srt, end;

	end = n - 1;
	while (srt < end)
	{
		tmp = a[srt];
		a[srt] = a[end];
		a[end] = tmp;
		srt++;
		end--;
	}
}
