#include "search_algos.h"

/**
 * Display_Array - prints the array of ints
 *
 * @Arr: a pointer to the array
 * @Begin: index
 * @End: last index
 */

void Display_Array(int *Arr, size_t Begin, size_t End)
{
	size_t inc;

	printf("Searching in array: ");
	for (inc = Begin; inc <= End; inc++)
	{
		if (inc != Begin)
			printf(", ");
		printf("%d", Arr[inc]);
	}
	printf("\n");
}

/**
 * In_between - searches for a value in an array of integers
 *
 * @Arr: a pointer
 * @size: number of elements
 * @value: value to search
 * @start: first index
 *
 * Return: value or -1
 */

int In_between(int *Arr, size_t size, int value, size_t start)
{
	size_t first = start, i = 0, last = size - 1;

	if (Arr)
	{
		while (first <= last)
		{
			Display_Array(Arr, first, last);
			i = (first + last) / 2;

			if (value > Arr[i])
				first = i + 1;
			else if (value < Arr[i])
				last = i - 1;
			else
				return (i);
		}
	}
	return (-1);
}

/**
 * exponential_search - searches for a value in an array of integers
 *
 * @array: Pointer
 * @size: Number of elements
 * @value: Value to search for
 *
 * Return: index for searched value ,otherwise -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t inc = 1;

	if (array)
	{
		while (inc < size && array[inc] < value)
		{
			printf("Value checked array[%lu] = [%d]\n", inc, array[inc]);
			inc *= 2;
		}

		inc = inc > size - 1 ? size : inc + 1;
		printf("Value found between indexes [%lu] and [%lu]\n", inc / 2, inc - 1);
		return (In_between(array, inc, value, inc / 2));
	}

	return (-1);
}

